#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	double result;
	
	printf("Dame dos numeros para dividir");
	
	scanf("%d %d", &num1, &num2);
	
	if( num1 != 0 && num2 != 0){
		result =  (double) num1/num2;
			printf("El resultado es: %f", result);
	}else{
		printf("No se puede dividir entre 0.");
	}
	

	
	return 0;
}
