#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
//	int numeros[] = {1,2,3,4,5,6,7,8,9,100};
//
//    	
//	int p =0;
//	printf("Imprimiendo info de arrays asc...\n");
//	
//	while(p < sizeof(numeros) / sizeof(int)  ){
//		printf("#%i >>> %i\n",p, numeros[p]);
//		p++;
//	}
//	
//	
//	p = sizeof(numeros) / sizeof(int)  - 1;
//	printf("\n\nImprimiendo info de arrays desc...\n");
//	while( p>=0 ){
//		printf("#%i >>> %i\n",p, numeros[p]);
//		p--;
//	}
//	

//
//
//      char* palabras[] = {"Escuela", "Arbol", "Perro", "Gato"};
//      int p = 0;
//      
//      for(p=0; p < (sizeof(palabras)/sizeof(char*)) ; p++){
//      	printf("Valor de posicion %i es %s\n", p, palabras[p]);
//	  }


     char* names[] = { "Maricruz", "Carlos Fabian", "Hector", "Kevin", "Jose Luis", "Alfonso", "Carlos Ivan", "Daniel", "Diana" };
     char* date[] = { "24/Abril/1999", "4/Sept/1999", "13/Marzo/1999", "6/Sept/1998", "13/Junio/1999", "20/Sept/1999", "18/Sept/1995", "1/Nov/1998", "29/Junio/1999" };
     int age[] = { 18,18,18,19,18,18,22,18,18 };
     int n;
     n = sizeof(names)/ sizeof(char*) - 1;
     while(n>=0){
     	printf("Nombre: %s, Fecha: %s, Edad: %i\n", names[n], date[n], age[n]);
     	n--;
	 }
      
      


	return 0;
}
