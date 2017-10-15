#include <stdio.h>
#include <stdlib.h>
#include "funcionCreada.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, newx;
	
	printf("Ingrese un numero: ");
	
	scanf("%i", &num);
	
	newx = factorial(num);
	
	printf("El resultado factorial es: %i", newx);
	
	
	return 0;
}
