#include <iostream>
#include <cmath>

int main(){
  int64_t number = 600851475143;
  long max_prime = lround(floor(sqrt(number)));

  int max_factor = 1;
  int factor = 2;
  
  while ( number > 1 ){
    while ( number % factor == 0){
      number = number / factor;
      max_factor = factor;
    }
    factor++;
  }
  std::cout << " Max prime factor : " << max_factor << std::endl;
}
