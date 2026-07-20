#include <iostream>
template<typename T> void greet(){ std::cout<<"(default)"<<std::endl; }
template<> void greet<const char*>(){ std::cout<<"Hello, World!"<<std::endl; }
int main(){ greet<const char*>(); }
