#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main(){ std::vector<char> v{'H','e','l','l','o',',',' ','W','o','r','l','d','!'}; std::transform(v.begin(),v.end(),v.begin(),[](char c){return c;}); std::string s(v.begin(),v.end()); std::cout<<s<<std::endl; }
