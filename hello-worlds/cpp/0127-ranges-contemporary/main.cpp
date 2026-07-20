#include <iostream>
#include <ranges>
#include <string>
int main(){ std::string s="Hello, World!"; for(char c: s | std::views::all){ std::cout<<c; } std::cout<<std::endl; }
