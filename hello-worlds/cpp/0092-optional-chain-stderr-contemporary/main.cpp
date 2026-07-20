#include <iostream>
#include <optional>
#include <string>
std::optional<std::string> addHello(){ return "Hello"; }
std::optional<std::string> addRest(std::string s){ return s+", World!"; }
int main(){ auto r=addHello(); auto final=r.has_value()?addRest(*r):std::optional<std::string>{}; if(final) std::cerr<<*final<<std::endl; }
