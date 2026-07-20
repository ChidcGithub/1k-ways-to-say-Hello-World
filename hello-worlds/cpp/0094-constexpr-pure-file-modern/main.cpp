#include <fstream>
#include <iostream>
constexpr const char* greet(){ return "Hello, World!"; }
int main(){ constexpr auto msg=greet(); std::ofstream f("hello.txt"); f<<msg; f.close(); std::cout<<msg<<std::endl; }
