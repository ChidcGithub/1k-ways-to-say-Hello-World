#include <iostream>
#include <memory>
#include <string>

namespace Gtk {
    class Window {
    public:
        void add(const std::string& w) {
            std::cout << "[Gtk::Window shows]: " << w << std::endl;
        }
    };
}

int main() {
    auto win = std::make_unique<Gtk::Window>();
    win->add("Hello, World!");
    return 0;
}
