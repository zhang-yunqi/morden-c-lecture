#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono_literals;

int main(){
  int i=0;
  while (true){
    std::this_thread::sleep_for(1s);
    std::cout<<i++<<std::endl;
  }
  return 0;
}
