#include <iostream>
#include <numeric>
#include <vector>
#include <string>
int main(){ std::vector<std::string> parts={"Hello",", ","World!"}; std::string r=std::accumulate(parts.begin(),parts.end(),std::string("")); std::cout<<r<<std::endl; }
