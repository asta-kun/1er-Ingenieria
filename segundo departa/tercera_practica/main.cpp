#include <iostream>
#include "calis.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Materia* materia = new Materia();
	

	char name[50];
	float cal1,cal2,cal3;
	printf("Nombre de la materia:");
	scanf("%s", name);
	materia->setName(name); //guardar el name
	



	
	
	
	
	
	
	printf("Ingrese calificaciones: ");
	scanf("%f %f %f", &cal1, &cal2, &cal3); //obtener calis
	
	materia->setCal1(cal1);
	materia->setCal2(cal2);
	materia->setCal3(cal3);
	
	printf("Materia: %s\n", materia->getName());
	
	printf(">>> Tus calificaciones separadas:\n1er: %1.2f\n2do: %1.2f\n3er: %1.2f\n", materia->getCal1(), materia->getCal2(), materia->getCal3() );
	
	printf("Tu promedio final es: %1.2f", materia->getPromedio());
	
	
	
	
	



		return 0;
}
