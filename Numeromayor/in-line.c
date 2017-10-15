#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Ingresa tres numeros:  ");
	int a,b,c,mayor,medio,menor;
	scanf("%i %i %i", &a, &b, &c);
	
	if( a> b && a>c ){
		
		mayor = a;
		
		medio = b>c?b:c;
		menor = b<c?b:c;
		
	}else {
		
		if( b>a && b>c){
			mayor = b;
			if(c<a){
				medio = a>c?a:c;
				menor = a<c?a:c;
			
		}else{
			mayor = c;
			medio = a>b?a:b;
			menor = a<b?a:b;
		}
				
	}
}
	printf("El menor es: %i \n", menor);
		printf("El medio es: %i\n", medio);
			printf("El mayor es: %i\n", mayor);
	
	return 0;
}
