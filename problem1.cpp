#include <iostream>

int main (){
	int sum = 0;
	for ( int x = 0 ; x < 1000; x++){
		if ( ( x % 3 == 0) || (x % 5 == 0) ){
			sum += x;
		}
	}
	std::cout << " SUM is " << sum << std::endl;
	return 0;
}
