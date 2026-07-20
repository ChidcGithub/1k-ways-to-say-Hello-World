"""Self-hosted HTTP server that responds with 'Hello, World!' on GET /."""

import http.server
import threading
import urllib.request

PORT = 8765


class HelloHandler(http.server.BaseHTTPRequestHandler):
    def do_GET(self):
        body = b"Hello, World!"
        self.send_response(200)
        self.send_header("Content-Type", "text/plain; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def log_message(self, *args):
        pass  # silence default request logging


def main():
    server = http.server.HTTPServer(("127.0.0.1", PORT), HelloHandler)
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        with urllib.request.urlopen(f"http://127.0.0.1:{PORT}/") as response:
            print(response.read().decode())
    finally:
        server.shutdown()
        server.server_close()


if __name__ == "__main__":
    main()
