#include <iostream>
#include <functional>
#include <string>
int main(){ std::function<void(const std::string&,size_t)> rec=[&](const std::string& s,size_t i){ if(i<s.size()){ std::cout<<s[i]; rec(s,i+1); } else { std::cout<<std::endl; } }; rec("Hello, World!",0); }
