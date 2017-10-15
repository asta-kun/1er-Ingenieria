#include <stdio.h>
#include <string.h>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




	class Palabra{
		//declarar la viarable de instancia
		private: char * cadena;
		
		//constructor
		public: Palabra(const char* cadenaInicial){
			cadena = (char *)std::malloc(sizeof(char)*strlen(cadenaInicial)+1);
			strcpy(cadena, cadenaInicial);
		}
	
	
	
	//destructor
	public: ~Palabra(){
		free(cadena);
	}
	
	//metodos de la clase
	public: Palabra* concatenar(const char* cadenaConcatenar){
		int size = strlen(cadena) + strlen(cadenaConcatenar)+1;
		char* aux = (char*)std::malloc(sizeof(char)*size);
		strcpy(aux, cadena);
		strcat(aux, cadenaConcatenar);
		cadena = aux;
		
		return this;
		
		
	}
	
	
	public: char* toString(){
		return cadena;
	}
	
	
};
	
	
