#include <iostream>
void printAll(){}
template<typename T,typename... Args> void printAll(T first,Args... rest){ std::cout<<first; printAll(rest...); }
int main(){ printAll("Hello",", ","World!"); std::cout<<std::endl; }
