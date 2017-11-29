#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int numeros[] = {3,6,7,1,6 8,2,7,6,6};
	
	int p =0;
	printf("Imprimiendo info de arrays...\n");
	
	while(numeros[p]){
		printf("#%i >>> %i\n",p, numeros[p]);
		p++;
	}
	
	
	return 0;
}
