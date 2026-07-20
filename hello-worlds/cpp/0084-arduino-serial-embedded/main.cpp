#include <iostream>

class Serial_ {
public:
    void println(const char* s) {
        std::cout << "[Serial]: " << s << std::endl;
    }
} Serial;

void setup() {
    Serial.println("Hello, World!");
}

void loop() {}

int main() {
    setup();
    loop();
    return 0;
}
