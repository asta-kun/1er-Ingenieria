#include <iostream>
#include "biblioteca.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Biblioteca* biblioteca = new Biblioteca();
	
	char nombreLibro1[20], nombreLibro2[20], nombreLibro3[20];
	int existencias, totalLibros=0, i;
	
	printf("Nombre libro #1:");
	scanf("%s", nombreLibro1);
	biblioteca->libros[0] = nombreLibro1;
	printf("Existencias:");
	scanf("%i", &existencias);
	biblioteca->existencias[0] = existencias;
	totalLibros = totalLibros + 1;

	
	
	
	
	printf("Nombre libro #2:");
	scanf("%s", nombreLibro2);
	biblioteca->libros[1] = nombreLibro2;
	printf("Existencias:");
	scanf("%i", &existencias);
	biblioteca->existencias[1] = existencias;
	totalLibros = totalLibros + 1;
	
	
		printf("Nombre libro #3:");
	scanf("%s", nombreLibro3);
	biblioteca->libros[2] = nombreLibro3;
	printf("Existencias:");
	scanf("%i", &existencias);
	biblioteca->existencias[2] = existencias;
	totalLibros = totalLibros + 1;
	
//	printf("%s %s\n\n", biblioteca->libros[0], biblioteca->libros[1]);


	
	do{
		
		for(i=0; i < totalLibros ; i++){
			printf("\nLibro #%i: %s", (i+1), biblioteca->libros[i]);
		}
		printf("\n Cual desea tomar prestado?");
		
		scanf("%i", &existencias);
		
		if(biblioteca->existencias[existencias - 1] > 1){
			biblioteca->existencias[existencias - 1] -=1;//vendido
			printf("Vendido...\n\n");
		}else{
			printf("No vendido... nada mas hay un ejemplar\n\n");
		}
		
		
		
	}while(true);
	
	
	
	
	
	
	
	return 0;
}
