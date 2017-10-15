#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i;
	printf("Escribe un numero:");
	scanf("%i", &num);
	for(i=1; i < num; i++){
		if( (i%2) == 0  ){
			printf("%i \n", i);
			
		}
	}
	return 0;
}
