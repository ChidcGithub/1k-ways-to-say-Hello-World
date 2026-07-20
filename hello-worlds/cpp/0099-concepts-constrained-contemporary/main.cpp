#include <iostream>
#include <concepts>
template<typename T> requires std::convertible_to<T,const char*> void greet(T s){ std::cout<<s<<std::endl; }
int main(){ greet("Hello, World!"); }
