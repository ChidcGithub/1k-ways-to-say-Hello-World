#include <iostream>
#include <string>

class NetworkStream {
    std::string buf;
public:
    void send() { std::cout << buf; }
    friend NetworkStream& operator<<(NetworkStream& n, const char* s) {
        n.buf += s;
        return n;
    }
};

int main() {
    NetworkStream ns;
    ns << "Hello, World!";
    ns.send();
    std::cout << std::endl;
    return 0;
}
