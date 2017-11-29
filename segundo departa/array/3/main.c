#include <stdio.h>
#include <stdlib.h>
#include "arraysFunctions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int tam = 0, temp, temp2;
	//defaults
	agregar(arr, &tam, 3);
	agregar(arr, &tam, 5);
	agregar(arr, &tam, 7);
	agregar(arr, &tam, 8);
	
	//solicitar
//	printf("Ingresa un numero a insertar: ");
//	scanf("%i", &temp);
//	
//	if(buscar(arr, tam, temp) == -1 ){
//		//no existe
//		agregar(arr, &tam, temp);
//		printf("Agregado correctamente...\n");
//	}else{
//		//existe
//		printf("El numero ya existe :(... No se puede agregar\n");
//	}
//	
//	
//	printf("El elemento 5 se encuentra en la position %d\n", buscar(arr, tam, 5) );
	
	for(int i = 0; i < tam; i++){
		printf("Position #%i:  %d\n",i, arr[i]);
	}
	
	//editar
		printf("Ingresa un numero a editar y position: ");
	scanf("%i %i", &temp, &temp2);
	agregarM(arr, temp2, temp);
	
	
		for(int i = 0; i < tam; i++){
		printf("Position #%i:  %d\n",i, arr[i]); 
	}
	
	return 0;
}
