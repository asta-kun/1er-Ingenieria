#include <iostream>
#include "calis.h"
#include <string.h>

//sets
Materia::Materia(){
	
	calificacion1 = 0;
		calificacion2 = 0;
			calificacion3 = 0;
			promedio = 0;
			
		
	
}
void Materia::setCal1(float x){
	
	calificacion1 = x;
	
}


void Materia::setCal2(float x){
	
	calificacion2 = x;
	
}


void Materia::setCal3(float x){
	
	calificacion3 = x;
	
}



void Materia::setName(char* x3){
        strcpy(name_materia,  x3);
}


//gets
float Materia::getCal1(){
	return calificacion1;
}


float Materia::getCal2(){
	return calificacion2;
}

float Materia::getCal3(){
	return calificacion3;
}

char* Materia::getName(){
    return name_materia;
}

float Materia::getPromedio(){
	promedio = (float) (calificacion1 + calificacion2 + calificacion3 )/3;
	return promedio;
}

