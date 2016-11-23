#include <iostream>
#include <vector>
#include <cmath>


int main(){
  int64_t number = 600851475143;
  long max_prime = lround(floor(sqrt(number)));
  std::vector<short> primes_sieve;
  std::vector<int> primes;
  int max_factor = 0;

  std::cout << "maxprime : " << max_prime << std::endl;
  std::cout << "Init Prime sieve" << std::endl;
  primes_sieve.push_back(0);
  primes_sieve.push_back(0);
  std::cout << "Pop Prime sieve" << std::endl;
  for ( int64_t i = 2; i < max_prime ; i++)
    primes_sieve.push_back(1);
  
  std::cout << "cleaning Prime sieve" << std::endl;
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

  for (int i=0; i < primes_sieve.size(); i++){
    if (primes_sieve.at(i) == 1 ) primes.push_back(i);
  }

  if (primes.size() >= 10001){

    std::cout << "10001 prime = " << primes.at(10000) << std::endl;
  }

  //  for(int i=0; i < primes.size(); i++) std::cout << primes.at(i) << " ";

}
