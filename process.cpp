#include <iostream>
#include <unistd.h>

int main(void){
	int number;
	
	std::cout <<"L'id del processo e'" << getpid() <<std::endl;
	std::cout <<"inserisci un numero";
	std::cin >> number;
}
