#include <iostream>
#include "class.h"
#include <string.h>


//sets
Autos::Autos(){
	//inicializar valores
	status = 1;
}


void Autos::setName(char* temp){
	//name = temp;
	strcpy(name,  temp);
}


void Autos::setPlacas(char* temp){
	//name = temp;
	strcpy(placas,  temp);
}


void Autos::setPeso(char* temp){
	//name = temp;
	strcpy(peso,  temp);
	status = 1;
}

void Autos::setPrecio(char* temp){
	//name = temp;
	strcpy(precio,  temp);
}

void Autos::updateStatus(){
	status = 0;
}


//gets

char* Autos::getName(){
	//name = temp;
	return name;
}

char* Autos::getPlacas(){
	//name = temp;
	return placas;
}


char* Autos::getPeso(){
	//name = temp;
	return peso;
}


char* Autos::getPrecio(){
	//name = temp;
	return precio;
}

char* Autos::getStatus(){
	if(status==1){
		return "Disponible";
	}else{
		return "No disponible";
	}
}

