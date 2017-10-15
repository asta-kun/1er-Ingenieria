#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functionLongitud.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palabrax[30];
	
	
	char t[] = { 0 };
	printf("\nIngrese la palabra:");
	scanf("%s", palabrax);

	
	printf("el nunero de caracteres es: %i\n",  longitud(palabrax));
	printf("La cadena esta vacia? %i", vacio(t));
	
}
