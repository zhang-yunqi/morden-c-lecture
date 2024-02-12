#include <fstream>
#include <iostream>

int main(){
  std::string str = "新年快乐\nHappy New Year";
  std::ofstream file("output.txt");
  file.write(str.data(), str.size());
  return 0;
}
