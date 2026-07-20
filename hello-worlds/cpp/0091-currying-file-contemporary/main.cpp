#include <fstream>
#include <iostream>
#include <string>
auto greet=[](std::string a){ return [=](std::string b){ return [=](std::string c){ return a+b+c; }; }; };
int main(){ auto r=greet("Hello")(", World")("!"); std::ofstream f("hello.txt"); f<<r; f.close(); std::cout<<r<<std::endl; }
