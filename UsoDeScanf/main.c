#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nombre[20];
	int edad;
	float altura;
	
	printf("Ingrese su nombre:");
	scanf("%s", nombre);
	
	printf("Ingrese la edad:");
	scanf("%d", &edad);
	
	printf("Ingrese la altura:");
	scanf("%f", &altura);
	
	printf("Ud. es %s, tiene %d, anios y una altura de %3.2f", nombre, edad, altura);
	return 0;
}
