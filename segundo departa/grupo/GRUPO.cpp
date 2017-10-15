#include <iostream>
#include "grupo.h"
#include <string.h>


Grupo::Grupo(){

                
		
	
}






//get
char* Grupo::getAll(){
	return data;
}


//sets
void Grupo::matricula(char* var1){
	char temp[500];

	strcat(temp, "\nMatricula: ");
	strcat(temp, var1);
	strcat(data, temp);
}

void Grupo::nombre(char* var1){
	char temp[500];

	strcat(temp, "\nNombre: ");
	strcat(temp, var1);
	strcat(data, temp);
}

void Grupo::paterno(char* var1){
	char temp[500];

	strcat(temp, "\nApellido Paterno: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Grupo::materno(char* var1){
	char temp[500];

	strcat(temp, "\nApellido Materno: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Grupo::facultad(char* var1){
	char temp[500];

	strcat(temp, "\nFacultad: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Grupo::grupo(char* var1){
	char temp[500];

	strcat(temp, "\nGrupo: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Grupo::carrera(char* var1){
	char temp[500];

	strcat(temp, "\nCarrera: ");
	strcat(temp, var1);
	strcat(data, temp);
}


void Grupo::turno(char* var1){
	char temp[500];

	strcat(temp, "\nTurno: ");
	strcat(temp, var1);
	strcat(data, temp);
}



