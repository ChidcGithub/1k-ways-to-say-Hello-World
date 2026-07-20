#include <iostream>
#include <string>
int main(){ std::string b64="SGVsbG8sIFdvcmxkIQ=="; std::string out; int val=0,bits=0; for(char c:b64){ if(c=='=') break; int v=(c>='A'&&c<='Z')?c-'A':(c>='a'&&c<='z')?c-'a'+26:(c>='0'&&c<='9')?c-'0'+52:0; val=(val<<6)|v; bits+=6; if(bits>=8){ bits-=8; out+=(char)((val>>bits)&0xFF);} } std::cout<<out<<std::endl; }
