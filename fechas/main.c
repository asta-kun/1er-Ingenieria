#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long fecha;
	printf("Escriba la fecha:");
	scanf("%ld", &fecha);
	int anio, mes, dia, res;
	anio = fecha /  10000;
	res = fecha % 10000;
	mes = res / 100;
	dia = res % 100;
	printf("El anio es %d, el mes %d y el dia es %d", anio, mes, dia);
	return 0;
}
