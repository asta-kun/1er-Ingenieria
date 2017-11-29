#include <iostream>
#include <thread>

int result1, result2, result3;



void f1(int x1, int x2, int x3, int x4, int x5){
	result1 = ((x1 + x2 + x3 + x4 + x5)*1.16)*1.10;
}

void f2(int x1, int x2, int x3, int x4, int x5){
	result2 = ((x1 + x2 + x3 + x4 + x5)*1.16)*1.10;
}

void f3(int x1, int x2, int x3, int x4, int x5){
	result3 = ((x1 + x2 + x3 + x4 + x5)*1.16)*1.10;
}




int main(){
	std::thread method1 (f1, 50, 20, 30, 50, 5);
	std::thread method2 (f2, 5, 33, 55, 14, 6);
	std::thread method3 (f3, 55, 66, 224, 564, 654);
	
	method1.join();
	method2.join();
	method3.join();
	
	printf("Factura #1: $%i\n", result1);
	printf("Factura #2: $%i\n", result2);
	printf("Factura #3: $%i\n", result3);
	
	return 0;
}
