#include <iostream>
const char* operator""_hello(unsigned long long){ return "Hello, World!"; }
int main(){ std::cout<<1_hello<<std::endl; }
