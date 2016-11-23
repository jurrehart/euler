#include <iostream>
#define NUMBER 100

int main(){
  int64_t squared_sum=0;
  int64_t sum_squares=0;

  for (int i = 1; i <= NUMBER; i++){
    sum_squares += i * i;
    squared_sum += i;
  }
  squared_sum *= squared_sum;

  std::cout << "diffrence :" << squared_sum - sum_squares << std::endl;
  
  
  return 0;
}
