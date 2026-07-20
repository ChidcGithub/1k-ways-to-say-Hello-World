#include <iostream>
template<int N> struct Greeting{ static constexpr const char* value="Hello, World!"; };
int main(){ std::cout<<Greeting<0>::value<<std::endl; }
