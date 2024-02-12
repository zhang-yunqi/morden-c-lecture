#include <fstream>
#include <iostream>
#include <string>

std::string get_resource() {
  std::string buffer;
  std::ifstream file("resource.txt");
  file.seekg(0, std::fstream::end);
  buffer.resize(file.tellg());
  file.seekg(0);
  file.read(buffer.data(), buffer.size());
  return buffer;
}

int main() {
  std::cout << get_resource() << std::endl;
  return 0;
}
