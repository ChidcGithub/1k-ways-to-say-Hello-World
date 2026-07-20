#include <iostream>
#include <string>
std::string build(){
    std::string s;
#define PART(x) s+=x;
#include "greeting_parts.def"
#undef PART
    return s;
}
int main(){ std::cout<<build()<<std::endl; }
