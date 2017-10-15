#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void copy(){
	char x1[50],x2[50];
		printf("Ingrese la primera palabra:");
		scanf("%s", x1);
		printf("Ingrese la segunda palabra:");
		scanf("%s", x2);
		
		strcpy(x1, x2);
		
		printf("Nuevo valor de la primera: %s", x1);
}


void cat(){
		char x1[50],x2[50];
		printf("Ingrese la primera palabra:");
		scanf("%s", x1);
		printf("Ingrese la segunda palabra:");
		scanf("%s", x2);
		
		strcat(x1, x2);
		
		printf("Concatenado junto es: %s", x1);
}


void len(){
		char x1[50];
		printf("Ingrese la palabra:");
		scanf("%s", x1);
		
		printf("La congitud es: %i", strlen(x1));
}


void cmp(){
		char x1[50],x2[50];
		int result;
		printf("Ingrese la primera palabra:");
		scanf("%s", x1);
		printf("Ingrese la segunda palabra:");
		scanf("%s", x2);
		
		result = strcmp(x1, x2);
		
		if(result > 0){
			printf("La primera es mayor.");	
		}else if(result < 0){
			printf("La segunda es mayor.");
		}else{
			printf("Ambas tienen la misma longitud.");
		}
		
}

void x_atoi(){
		char x1[50];
		printf("Ingrese el numero en string:");
		scanf("%s", x1);
		
		printf("La congitud es: %i", atoi(x1));
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int option;
	printf("Que operacion desea?\n1:Copiar\n2:Concatenar\n3:Calcular la longitud\n4:Calcular que palabra es mayor\n5:Convertir a numerico un string\n");
	scanf("%i", &option);

	
	switch(option){
	case	1:
		 copy();
		break;
	case	2: 
		cat();
				break;
	case	3: 
		len();
				break;
	case	4:
		cmp();
				break;
	case	5:
		 x_atoi();
				break;
		default: 
		printf("No existe la opcion.");
				break;
   }
	
		
	return 0;
}
