#include <bits/chrono.h>
#include <ctime>
#include <iostream>
#include <chrono>
#include <ostream>


int main(){
  auto now = std::chrono::system_clock::now();//std::chrono::time_point<std::chrono::steady_clock>
  std::time_t time = std::chrono::system_clock::to_time_t(now);
  std::cout<<std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count()<<std::endl;//epoch:1970年一月一日凌晨零点零分零秒
  std::cout<<std::ctime(&time)<<std::endl;
  return 0;
}
