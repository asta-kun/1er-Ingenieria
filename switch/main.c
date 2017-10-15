#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int day;
	char* dia;
	printf("Dame un numero:");
	scanf("%i", &day);
	
	
	switch(day){
		    case 1:
			dia = "Lunes";
			break;
			case 2:
			dia = "Martes";
			break;
			case 3:
			dia = "Miercoles";
			break;
			case 4:
			dia = "Jueves";
			break;
			case 5:
			dia = "Viernes";
			break;
			case 6:
			dia = "Sabado";
			break;
			case 7:
			dia = "Domingo";
			break;
			
			default:
				dia = "No existe :v";
				break;
			
	}
	
	printf("El dia segun el numero es: %s", dia);
	
	return 0;
}
