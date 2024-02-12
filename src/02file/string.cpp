#include <ios>
#include <iostream>
#include <sstream>

int main(){
  std::string str = "Hello world";
  std::istringstream sstr(str);

  std::cout<<(char)sstr.get()<<std::endl; 
  
  sstr.seekg(-1, std::ios_base::end);// \0 EOF
  
  std::cout<<(char)sstr.get()<<std::endl;  
  return 0;
}
