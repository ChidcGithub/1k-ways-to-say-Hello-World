"""TCP socket server that sends 'Hello, World!' to a connected client."""

import socket
import socketserver
import threading

PORT = 8766


class HelloHandler(socketserver.BaseRequestHandler):
    def handle(self):
        self.request.sendall(b"Hello, World!")


def main():
    server = socketserver.TCPServer(("127.0.0.1", PORT), HelloHandler)
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        with socket.create_connection(("127.0.0.1", PORT)) as sock:
            data = sock.recv(1024)
            print(data.decode())
    finally:
        server.shutdown()
        server.server_close()


if __name__ == "__main__":
    main()
