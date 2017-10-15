#include <iostream>
#include "cajero.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Cajero* cajero = new Cajero();
	
	
	cajero->depositar(100);
	printf("Tu saldo es: $%3.2f\n", cajero->consultar());
	
	float retiro = cajero->retirar(50);
	printf("Tu saldo despues de retirar es: $%3.2f\n", retiro);
	cajero->depositar(500);
	printf("Tu saldo final: $%3.2f", cajero->consultar());
	
		return 0;
}
