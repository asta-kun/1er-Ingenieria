#include <iostream>
#include "cineClass.h"


Cine::Cine(){
	//????
			
}




//sets
void Cine::setName(int x, char* value){
	//guardar nombres
	names[x] = value;
}


void Cine::setDescription(int x, char* value){
	//guardar descripciones
	description[x] = value;
}

void Cine::setChairs(int x, int value){
	//guardar asientos
	chairs[x] = value;
}


bool Cine::setSaleByValue(int value){
	
	//vender
	if(chairs[value]){
		//se vende
		chairs[value]-=1;
		return true;
	}else{
		//no se vende
		return false;
	}
	
}


//gets
char* Cine::getNameByValue(int value){
	//retornar por valor
	return names[value];
}


char* Cine::getDescriptionByValue(int value){
	//retornar por valor
	return description[value];
}


int Cine::getChairsByValue(int value){
	//retornar por valor
	return chairs[value];
}

