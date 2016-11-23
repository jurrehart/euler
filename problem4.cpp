#include <iostream>
#include <string>
#include <iterator>

int main (){
  std::string string_A;
  std::string string_B;
  int largest;

  for ( int a=100; a < 1000; a++){
    for ( int b=100; b < 1000; b++){
      string_A = std::to_string(a*b);
      string_B.clear();
      for ( std::string::reverse_iterator i = string_A.rbegin(); i != string_A.rend(); i++)
	string_B.push_back(*i);

      if (string_A.compare(string_B) == 0 )
	if ( a*b > largest )
	  largest = a*b;
    }
  }

  std::cout << " Largest Palindrom : " << largest << std::endl;
  return 0;
}
