#include <fstream>
#include <iostream>
#include <string>
std::string build(const std::string& s,size_t i){ if(i>=s.size()) return ""; return std::string(1,s[i])+build(s,i+1); }
int main(){ std::string r=build("Hello, World!",0); std::ofstream f("hello.txt"); f<<r; f.close(); std::cout<<r<<std::endl; }
