#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Ingresa tres numeros:  ");
	int a,b,c,mayor,medio,menor;
	scanf("%i %i %i", &a, &b, &c);
	
	if( a> b && a>c ){
		
		mayor = a;
		
		medio = MAX(b,c);
		menor = MIN(b,c);
		
	}else {
		
		if( b>a && b>c){
			mayor = b;
			if(c<a){
				medio = MAX(a,c);
				menor = MIN(a,c);
			
		}else{
			mayor = c;
			medio = MAX(a,b);
			menor = MIN(a,b);
		}
				
	}
}
	printf("El menor es: %i \n", menor);
		printf("El medio es: %i\n", medio);
			printf("El mayor es: %i\n", mayor);
	
	return 0;
}
