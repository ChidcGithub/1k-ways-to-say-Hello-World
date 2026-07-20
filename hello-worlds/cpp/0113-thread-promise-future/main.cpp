#include <iostream>
#include <thread>
#include <future>
#include <string>
int main(){ std::promise<std::string> p; std::future<std::string> f=p.get_future(); std::thread t([&p](){ p.set_value("Hello, World!"); }); std::cout<<f.get()<<std::endl; t.join(); }
