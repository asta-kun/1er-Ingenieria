#include <iostream>
#include "empresas.h"
#include <string.h>


Empresa::Empresa(){
 
		
	
}










char* Empresa::Todos(){
	return data;
}


//sets
void Empresa::nombre(char* field){
	char temp[50];

	strcat(temp, "\n\n\nNombre: ");
	strcat(temp, field);
	strcat(data, temp);
}

void Empresa::fecha(char* field){
		char temp[50];

	strcat(temp, "\nFecha: ");
	strcat(temp, field);
	strcat(data, temp);

}

void Empresa::inicio(char* field){
			char temp[100];

	strcat(temp, "\nInicio: ");
	strcat(temp, field);
	strcat(data, temp);
}


void Empresa::fin(char* field){
			char temp[50];

	strcat(temp, "\nFin: ");
	strcat(temp, field);
	strcat(data, temp);
}





