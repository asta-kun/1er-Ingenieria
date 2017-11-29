#include <iostream>
#include <thread>

int a,b,c;

void foo(){
	a = 5;
	b = a + 2;
	printf("\nValor de a %i y valor de b %i\n", a, b);
}


void bar(){
	c = a + b;
	printf("\nValor de c %i\n", c);
}

int main(){
	std::thread first (foo);
	std::thread second (bar);
	
	std::cout << "main, foo and bar now execute concurrently...\n";
	
	//synchronize threads:
	first.join();
	second.join();
	
	std::cout << "foo and bar completed.\n";
	
	return 0;
}
