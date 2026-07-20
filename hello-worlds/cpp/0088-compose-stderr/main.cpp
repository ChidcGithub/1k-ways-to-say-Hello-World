#include <iostream>
#include <string>
auto addComma=[](std::string s){ return s+", World"; };
auto addBang=[](std::string s){ return s+"!"; };
auto compose=[](auto f,auto g){ return [=](std::string s){ return g(f(s)); }; };
int main(){ auto fn=compose(addComma,addBang); std::cerr<<fn("Hello")<<std::endl; }
