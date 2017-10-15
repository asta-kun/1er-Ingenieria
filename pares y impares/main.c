#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Ingrese un numero:");
	scanf("%i", &num);
	
	if( (num % 2) == 0  ){
		printf("Es par");
	}else{
		printf("Es impar");
	}
	
	return 0;
}
