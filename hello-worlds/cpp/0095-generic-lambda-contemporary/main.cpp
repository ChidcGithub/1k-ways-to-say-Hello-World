#include <iostream>
int main(){ auto greet=[](auto s){ std::cout<<s<<std::endl; }; greet("Hello, World!"); }
