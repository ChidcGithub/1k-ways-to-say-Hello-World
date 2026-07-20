#include <iostream>
#include <cstring>
int main(){ constexpr const char* msg="Hello, World!"; static_assert(sizeof("Hello, World!")-1==13,"length check"); std::cout<<msg<<std::endl; }
