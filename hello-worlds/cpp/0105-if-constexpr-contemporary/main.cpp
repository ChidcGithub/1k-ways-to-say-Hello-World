#include <iostream>
#include <type_traits>
template<typename T> void greet(T t){ if constexpr(std::is_same_v<T,const char*>){ std::cout<<t<<std::endl; } else { std::cout<<"(unsupported)"<<std::endl; } }
int main(){ greet("Hello, World!"); }
