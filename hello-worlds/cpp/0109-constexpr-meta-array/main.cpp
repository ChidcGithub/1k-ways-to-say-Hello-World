#include <iostream>
constexpr char MSG[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, 0};
constexpr size_t LEN = sizeof(MSG) - 1;
int main(){ std::cout<<MSG<<std::endl; }
