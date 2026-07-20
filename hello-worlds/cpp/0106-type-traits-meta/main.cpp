#include <iostream>
#include <type_traits>
template<typename T> void greet(T t){ if(std::is_convertible_v<T,const char*>){ std::cerr<<t<<std::endl; } }
int main(){ greet("Hello, World!"); }
