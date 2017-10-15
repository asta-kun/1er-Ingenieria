#include <iostream>
#include "almacenClass.h"
#include <string.h>

	/*VALORES EN LA CLASE PARA MUESTRA 
		  char name[100], expiry_date[50];
	      int code, count;
	      float price;
	*/
	
//sets
Almacen::Almacen(){
	//inicializar valores
	    int code=0, count=0;
	    float price=0;
}


void Almacen::setName(char* temp){
	//name = temp;
	strcpy(name,  temp);
}

void Almacen::setExpiry(char* temp){
	//expiry_date = temp;
	strcpy(expiry_date,  temp);
}

void Almacen::setCode(char* temp){
	//code = temp;
	strcpy(code,  temp);
}

void Almacen::setCount(char* temp){
	//count = temp;
	strcpy(count,  temp);
}

void Almacen::setPrice(char* temp){
	//price = temp;
	strcpy(price,  temp);
}





//gets
char* Almacen::getName(){
	return name;
}

char* Almacen::getExpiry(){
	return expiry_date;
}

char* Almacen::getCode(){
	return code;
}

char* Almacen::getCount(){
	return count;
}

char* Almacen::getPrice(){
	return price;
}


