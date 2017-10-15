#include <stdio.h>
#include <stdlib.h>

#include "unificar.h"




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d1,d2,m1,m2,a1,a2;
	long f1,f2;
	
	
	printf("Ingrese fecha #1:");
	
	scanf("%i %i %i", &d1, &m1, &a1);
	
		
	printf("Ingrese fecha #2:");
	
	scanf("%i %i %i", &d2, &m2, &a2);
	
	
	f1 = unificarFecha(d1, m1, a1);
	f2 = unificarFecha(d2, m2, a2);
	
	if(f1 > f2){
		printf("La fecha #1 es posterior.");
	}else{
		printf("La fecha #2 es posterior.");
	}
	
	
	return 0;
}
