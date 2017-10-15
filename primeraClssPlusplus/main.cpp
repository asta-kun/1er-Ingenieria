#include <iostream>
#include "x.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//instanciar objetos
	Palabra* p = new Palabra("Hola ");
	Palabra* p2 = new Palabra("Estudio en ");
	
	
	
	p->concatenar(" Soy Hector");
	
	p->concatenar(" Vivo en acapulco");
	
	printf("El objeto palabra tiene guardado: %s", p->toString());
	
	
	
	p2->concatenar("Universidad Amerciana de Acapulco");
	p2->concatenar(" Estudio ingenieria");
	printf("\nEl objeto #2 contiene: %s", p2->toString());
	
	
		
	return 0;
}

