#include <iostream>
#include <type_traits>
template<typename T, typename=typename std::enable_if<std::is_convertible<T,const char*>::value>::type> void greet(T msg){ std::cout<<msg<<std::endl; }
int main(){ greet("Hello, World!"); }
