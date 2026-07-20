#include <iostream>
template<typename... T> void printAll(T... t){ (std::cout<<...<<t)<<std::endl; }
int main(){ printAll("Hello",", ","World!"); }
