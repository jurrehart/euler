#include <iostream>

const int UPPER_LIMIT=4000000;
int main(){

  int fib = 0;
  int prev = 0;
  int last = 1;
  int sum = 0;
  while (fib < UPPER_LIMIT){
    fib = last + prev;
    prev = last;
    last = fib;
    //std::cout << fib << " ";

    if ( fib % 2 == 0) sum += fib;
  }
  std::cout << sum << std::endl;
}
