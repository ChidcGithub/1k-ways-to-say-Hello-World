import threading

# Split the greeting into ordered parts; each part is printed by its own thread.
parts = ["Hello", ", ", "World!"]

# A condition variable (built on a lock) ensures threads print in order
# without interleaving their output on stdout.
cv = threading.Condition()
turn = 0


def worker(idx, part):
    global turn
    with cv:
        while turn != idx:
            cv.wait()
        print(part, end="", flush=True)
        turn += 1
        cv.notify_all()


threads = [threading.Thread(target=worker, args=(i, part)) for i, part in enumerate(parts)]
for t in threads:
    t.start()
for t in threads:
    t.join()

print()
