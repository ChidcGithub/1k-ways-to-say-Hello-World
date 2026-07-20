#include <iostream>
void greet(){ std::cout<<"Hello, World!"<<std::endl; }
int main(){ void(*fp)()=greet; fp(); }
