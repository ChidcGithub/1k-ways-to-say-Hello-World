#include <iostream>
#include <future>
#include <string>
int main(){ std::future<std::string> f=std::async(std::launch::async,[](){ return std::string("Hello, World!"); }); std::cout<<f.get()<<std::endl; }
