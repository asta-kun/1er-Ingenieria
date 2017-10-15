#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char name[30];
	int turno;
	double sueldo, extra, iva, isr, sueldo_final, retenido;
	
	int tadiurnas = 500;
	int tanocturna = 800;
	int domingoplus = 200;
	
	printf("Nombre del empleado:\n");
	scanf("%s", name);
	printf("Ingrese su turno:\n");
	printf("1: Matutino\n");
	printf("2: Norturno\n");
	
	scanf("%i", &turno);
	
	
	if(turno == 1){
		sueldo = (double) 15 * tadiurnas;
		extra = 400;
		sueldo = sueldo + extra;
	}else{
		sueldo = (double) 15 * tanocturna;
		extra = 600;
		sueldo = sueldo + extra;
	}
	
	
	
	printf("Nombre >>> %s\n", name);
	
	printf("Tu extra por trabajar los domingos es: $%lf\n", extra);
	
	printf("Tu sueldo bruto es:$%lf\n", sueldo);
	
	iva = sueldo * 0.16;
	
	printf("El IVA de tu salario sera (16%%): $%lf\n", iva);
	
	isr = sueldo * .10;
	
	printf("El ISR retenido es (10%%): %lf$\n", isr);
	
	sueldo_final = sueldo - iva - isr;
	retenido = sueldo  - isr;
	
		
	printf("El IVA retenido es: $%lf\n", retenido);
	
	printf("Tu sueldo neto es: $ %lf\n", sueldo_final);
	
	
	return 0;
}
