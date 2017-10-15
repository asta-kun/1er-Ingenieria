#include <stdio.h>
#include <stdlib.h>
#include "funcionCreada.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//declarar vars
	long fecha;
	int dia, mes, anio;
	int cantidadMarzo, cantidadBisiesto, cantidadErrores, hayErrores, anioBisiesto;
	
	
	//inicializar vars
	cantidadBisiesto=0;
	cantidadErrores=0;
	cantidadMarzo = 0;
	
	printf("Fecha: ");
	
	scanf("%i", &fecha);
	
	while(fecha != 0){
		dividirFecha(fecha, &dia, &mes, &anio);
		anioBisiesto = esAnioBisiesto(anio);
		
		if(mes == 3){
			cantidadMarzo = cantidadMarzo + 1;
		}
		
		if(anioBisiesto){
			cantidadBisiesto = cantidadBisiesto + 1;
		}
		
		
		hayErrores = (dia == 29) && (mes ==2) && ! anioBisiesto;
		
		if(hayErrores){
			cantidadErrores = cantidadErrores + 1;
		}		
		
			printf("Fecha: ");
	
	scanf("%i", &fecha);
		
		
	}
	
	
	printf("Cantidad de meses de marzo ingresadas: %i\ncantidad de anios bisiestos ingresados: %i\nCantidad de fechas con errores ingresadas: %i", cantidadMarzo, cantidadBisiesto, cantidadErrores);
	
	
	return 0;
}
