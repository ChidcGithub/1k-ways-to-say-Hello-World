#include <iostream>
#include <numeric>
#include <string>
int main(){ std::cerr<<std::transform_reduce("Hello, World!","Hello, World!"+13,std::string(""),[](std::string a,std::string b){return a+b;},[](char c){return std::string(1,c);})<<std::endl; }
