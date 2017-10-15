#include <stdio.h>
#include <stdlib.h>
#include "functionsx.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,v;
	printf("Escriba un valor:");
	scanf("%lf", &v);
	
	a = valorAbsoluto(v);
	printf("Valor absoluto de %lf es %lf", v, a);
	return 0;
}
