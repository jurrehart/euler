#include <iostream>
#include <vector>

int main(){

  std::vector<short> primes_sieve;
  
  const int max_prime = 2000000;

  std::cout << "Init Prime sieve" << std::endl;
  primes_sieve.push_back(0);
  primes_sieve.push_back(0);

  for ( int64_t i = 2; i < max_prime ; i++)
    primes_sieve.push_back(1);
  
  for ( int64_t i = 2; i < primes_sieve.size() ; i++){
    if (primes_sieve.at(i) == 1 ){
      int fact = 2;
      while ( i*fact < primes_sieve.size() ){
	primes_sieve.at(i*fact) = 0;
	fact++;
      }
    }
  }
  std::cout << "end Prime sieve Init" << std::endl;

  int64_t sum = 0;
  for (int i=0; i < primes_sieve.size(); i++){
    if (primes_sieve.at(i) == 1 )
      sum += i;
  }

  std::cout << "Sum: " << sum << std::endl;
  return 0;
}
