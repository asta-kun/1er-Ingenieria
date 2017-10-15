#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Ingresa tres numeros:  ");
	int a,b,c,mayor,medio,menor;
	scanf("%i %i %i", &a, &b, &c);
	
	if( a> b && a>c ){
		
		mayor = a;
		
		if(b<c){
			menor = b;
			medio = c;
		}else{
			menor = c;
				medio = b;
		}
		
	}else {
		
		if( b>a && b>c){
			mayor = b;
			if(c<a){
				menor = c;
				medio =a;
			}
			else{
				medio =a;
				menor = c;
			}
		}else{
			mayor = c;
			if(a<b){
				menor =a;
				medio = b;
			}else{
				medio = a;
				menor =b;
			}
		}
				
	}
	
	printf("El menor es: %i \n", menor);
		printf("El medio es: %i\n", medio);
			printf("El mayor es: %i\n", mayor);
	
	return 0;
}
