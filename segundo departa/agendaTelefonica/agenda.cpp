#include <iostream>
#include "classAgenda.h"
#include <string.h>


Agenda::Agenda(){
	
	count_values = 0; // numero total a 0
    names[0] = "";
        address[0] = "";
            phones[0] = "";
                mails[0] = "";
                
		
	
}



//gets
char* Agenda::getName(int x){
	
	return names[x];
	
}


char* Agenda::getAddress(int x){
	
	return address[x];
	
}


char* Agenda::getPhone(int x){
	
	return phones[x];
	
}


char* Agenda::getMail(int x){
	
	return mails[x];
	
}



//get
int Agenda::getNewColumn(){
	count_values+=1; // aumentar 1 para el proximo
	return count_values-1;
}
int Agenda::getCountColumn(){
	return count_values;
}

char* Agenda::getAll(){
	return data;
}


//sets
void Agenda::setName(int x2, char* var1){
	char temp[500];

	strcat(temp, "\n\n\nNombre: ");
	strcat(temp, var1);
	strcat(data, temp);
}

void Agenda::setAddress(int x2, char* var1){
		char temp[500];

	strcat(temp, "\nDireccion: ");
	strcat(temp, var1);
	strcat(data, temp);

}

void Agenda::setPhone(int x2, char* var1){
			char temp[500];

	strcat(temp, "\nTelefono: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Agenda::setMail(int x2, char* var1){
			char temp[500];

	strcat(temp, "\nCorreo: ");
	strcat(temp, var1);
	strcat(data, temp);
}





