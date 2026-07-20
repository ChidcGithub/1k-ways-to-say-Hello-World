#include <iostream>
#include <string>

class QLabel {
    std::string text;
public:
    explicit QLabel(const std::string& t) : text(t) {}
    void show() { std::cout << "[GUI QLabel]: " << text << std::endl; }
};

class QApplication {
public:
    QApplication(int, char**) {}
    void exec() { /* mock event loop */ }
};

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QLabel label("Hello, World!");
    label.show();
    app.exec();
    return 0;
}
