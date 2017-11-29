#include <iostream>
#include "functions.h"
#include "class.h"
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Autos* auto1 = new Autos;
	Autos* auto2 = new Autos;
	Autos* auto3 = new Autos;
	Autos* auto4 = new Autos;
	Autos* auto5 = new Autos;
	
	int select;
	
	//pedir data
	/*
	auto1->setName(getChar("\nNombre del auto (modelo) #1: "));
	auto1->setPrecio(getChar("Precio del auto: "));
	auto1->setPeso(getChar("Peso del auto (kg): "));
	
	
		auto2->setName(getChar("\nNombre del auto (modelo)  #2: "));
	auto2->setPrecio(getChar("Precio del auto: "));
	auto2->setPeso(getChar("Peso del auto (kg): "));
	
	
		auto3->setName(getChar("\nNombre del auto (modelo) #3: "));
	auto3->setPrecio(getChar("Precio del auto: "));
	auto3->setPeso(getChar("Peso del auto (kg): "));
	
		auto4->setName(getChar("\nNombre del auto (modelo)  #4: "));
	auto4->setPrecio(getChar("Precio del auto: "));
	auto4->setPeso(getChar("Peso del auto (kg): "));
	
		auto5->setName(getChar("\nNombre del auto (modelo)  #5: "));
	auto5->setPrecio(getChar("Precio del auto: "));
	auto5->setPeso(getChar("Peso del auto (kg): "));
	
*/




	auto1->setName("MustanG 4665G");
	auto1->setPrecio("$500,000");
	auto1->setPeso("6 Toneladas");
	
	
		auto2->setName("AUDIO 405K");
	auto2->setPrecio("$1,000,000");
	auto2->setPeso("3 Toneladas");
	
	
		auto3->setName("VOLKSWAGEN 455TF");
	auto3->setPrecio("$2,000,000");
	auto3->setPeso("2 Toneladas");
	
		auto4->setName("Bochito F533");
	auto4->setPrecio("$200,000");
	auto4->setPeso("1 Tonelada");
	
		auto5->setName("Acura G4F3");
	auto5->setPrecio("$650,000");
	auto5->setPeso("2.5 Toneladas");

do{
		printf("\n\n\n\n\n\n\n\n\n\n\n\Autos en almacen(modelo y disponibilidad):\n\n");
    printf("1:%s ==> %s\nPrecio: %s\nPeso: %s\n", auto1->getName(), auto1->getStatus(), auto1->getPrecio(), auto1->getPeso() );
    printf("\n2:%s ==> %s\nPrecio: %s\nPeso: %s\n", auto2->getName(), auto2->getStatus(), auto2->getPrecio(), auto2->getPeso() );
    printf("\n3:%s ==> %s\nPrecio: %s\nPeso: %s\n", auto3->getName(), auto3->getStatus(), auto3->getPrecio(), auto3->getPeso() );
    printf("\n4:%s ==> %s\nPrecio: %s\nPeso: %s\n", auto4->getName(), auto4->getStatus(), auto4->getPrecio(), auto4->getPeso() );
    printf("\n5:%s ==> %s\nPrecio: %s\nPeso: %s\n", auto5->getName(), auto5->getStatus(), auto5->getPrecio(), auto5->getPeso() );
    
        
    //pedir cual editar
    printf("\n>>Ingrese el digito para vender: ");
    scanf("%i", &select);
    
    switch(select){
    		case 1:
    			auto1->updateStatus();
    		break;
    		case 2:
    			auto2->updateStatus();
    		break;
    		case 3:
    			auto3->updateStatus();
    		break;
    		case 4:
    			auto4->updateStatus();
    		break;
    		case 5:
    			auto5->updateStatus();
    		break;
    	}

    
    
}while(1);



	return 0;
}
