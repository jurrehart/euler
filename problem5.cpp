#include <iostream>
#define MAX_DIVIDER 20

int main(){
  bool found = false;
  int number = 0;

  while(!found){
    found=true;
    number++;    
    for ( int div = 1; div <= MAX_DIVIDER; div++){
      found = found && (number % div == 0);
    }

  }

  std::cout << " smallest number : " << number << std::endl;
  return 0;
}
