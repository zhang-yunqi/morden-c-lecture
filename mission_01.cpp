#include <iostream>
#include <chrono>
#include <thread>
#include <time.h>
using namespace std::chrono_literals;

int f(int i)
{
  if(i==0)
  {
    return 0;
  }
  if((i==1)||(i==2))
  {
      return 1;
  }
  return f(i-1)+f(i-2);
}
int main(){
  int i = 0;
  std::cout << "输入 i : ";
  std::cin >> i;
  
  auto start = std::chrono::steady_clock::now();

  //Doing sth.
  //std::this_thread::sleep_for(1s);
  std::cout << f(i) << std::endl;
  
  auto end = std::chrono::steady_clock::now();
  //auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  auto duration = std::chrono::duration<double,std::milli>( end - start ).count();
  std::cout << "耗费了"<< duration << "毫秒" << std::endl;

  return 0;
}
