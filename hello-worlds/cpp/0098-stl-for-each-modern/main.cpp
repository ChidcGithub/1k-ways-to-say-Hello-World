#include <iostream>
#include <algorithm>
#include <string>
int main(){ std::string s="Hello, World!"; std::for_each(s.begin(),s.end(),[](char c){ std::cout<<c; }); std::cout<<std::endl; }
