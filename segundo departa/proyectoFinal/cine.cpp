#include <iostream>
#include "cineClass.h"


Cine::Cine(){
	
			
}

//
////sets
//void Cine::saveNames(char* input[], int size){
//	//guardar nombres
//	for(int i=0;i<size;i++){
//		names[i] =(char*) input[i];
//			}
//}
//
//
//void Cine::saveDescriptions(char* input[], int size){
//	//guardar nombres
//	for(int i=0;i<size;i++){
//		description[i] =(char*) input[i];
//			}
//}
//
//void Cine::saveChairs(int input[], int size){
//	//guardar nombres
//	for(int i=0;i<size;i++){
//		chairs[i] = input[i];
//			}
//}

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

