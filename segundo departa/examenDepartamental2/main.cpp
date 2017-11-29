#include <iostream>
#include "wallet.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Wallet* wallet = new Wallet();
	int total, temp, temp2, stop=0;
	char tempx[100];
	
	printf("Ingrese su saldo inicial: $");
	scanf("%i", &total);
	wallet->setTotal(total);
	
	
	do{
		
		//evaluar si tiene saldo
		if( wallet->getTotal() > 0 ){
			
					//pedir primer gasto
		printf("\nNombre del gasto: "); // es despreciable el nombre
		scanf("%s", tempx);
		printf("Ingrese el monto: $");
		scanf("%i", &temp);
		
	       //evaluar si se puede gastar
	       if( wallet->getTotal() >= temp ){
	       	//aun se puede gastar
	       	wallet->setGasto(temp);
	       	printf("GASTO APLICADO.\n");
	       	
	       	
		   }else{
		   	//no tienes suficiente para comprar 
		   	printf("No tienes suficientes fondos...");
		   	printf(">>> Tus fondos: $%i", wallet->getTotal());
		   	
		   	printf("  --- Desea adeudar? (1 si y 0 no): ");
		   	scanf("%i", &temp2);
		   	if(temp2 == 1){
		   		//se aplicara adeudo
		   		wallet->setGasto(temp);
		   		printf("\nGASTO APLICADO.");
			   }
		   	
		   }
	       
	       
			
		}else{
			printf("\nYa no tienes dinero :(... >>> Tus fondos son $%i (Ingrese cualquier tecla para continuar...) ", wallet->getTotal());
			scanf("%s", tempx); // no recuerdo como parar 
			stop =1;
		}
		

		
		
	}while( stop == 0 );



	printf("\n\nSaldo final: $%i", wallet->getTotal() );
	
	
	
	
	return 0;
}
