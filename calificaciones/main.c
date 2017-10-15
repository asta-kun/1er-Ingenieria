#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total=0, total_cal=0, cal_max=0, matricula,cal;
	char name_max[11], name[11];
	
	do{
		printf("Ingrese el nombre del alumno, matricula y calificacion: ");
		scanf("%s %i %i", name, &matricula, &cal);
		
		
		if(matricula != 0){ // si no es cero para evaluar
			total = total + 1;
			total_cal = total_cal + cal;
			
			if(cal_max < cal){ //si la calificacion ingresada es mayor a la maxima guardada
				cal_max = cal; //guardar la cali como maxima nueva
				strcpy(name_max,name); // guardar el name como el nuevo					
			}
			
		}
		
	}while(matricula != 0); //si la matricula es 0, se detiene
	
	double totalPro =  total_cal / total ;
	
	printf("Total de informacion ingresada %i y el promedio es %f", total, totalPro );
	
	printf("\nEl nombre del maximo en promedio es: %s \nel promedio es: %i", name_max, cal_max); // imprimir los valores
	
	
	
	return 0;
}
