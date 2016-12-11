#include <iostream>

// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

int main(){

  int c;
  for ( int b = 1; b < 500; b++){
    for ( int a = 0; a < b; a++){
      c = 1000 - b - a;
      if ( ( (a*a) + (b*b) ) == (c*c) ){
	std::cout << " a: " << a << " b: " << b << " c: " << c << std::endl;
	std::cout << "Product: " << a*b*c << std::endl;
      }
    }
  }
  return 0;
}
