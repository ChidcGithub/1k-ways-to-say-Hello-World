import wave, struct

w = wave.open("hello.wav", "w"); w.setnchannels(1); w.setsampwidth(2); w.setframerate(44100); w.writeframes(b"".join(struct.pack("<h", int(32767 * (1 - 2 * ((i // 25) % 2)))) for i in range(22050))); w.close()

print("Wrote hello.wav")
