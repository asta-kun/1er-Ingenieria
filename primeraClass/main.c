#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//instanciar objetos
	Palabra palabra = new Palabra("Hola ");
	palabra.concatenar('Soy Hector');
	
	palabra.concatenar('Vivo en acapulco');
	
	printf("El objeto palabra tiene guardado: %s", palabra.toString());
		
	return 0;
}



	class Palabra{
		//declarar la viarable de instancia
		private: char * cadena;
		
		//constructor
		public: Palabra(const char* cadenaInicial){
			cadena = (char *)malloc(sizeof(char)*strlen(cadenaInicial)+1);
			strpy(cadena, cadenaInicial);
		}
	
	
	
	//constructor
	public: ~Palabra(){
		free(cadena);
	}
	
	//metodos de la clase
	public: Palabra* concatenar(const char* cadenaConcatenar){
		int size = strlen(cadena) + strlen(cadenaConcatenar)+1;
		char* aux = (char*)malloc(sizeof(char)*size);
		strcpy(aux, cadena);
		strcat(aux, cadenaConcatenar);
		cadena = aux;
		
		return this;
		
		
	}
	
	
	public: char* toString(){
		return cadena;
	}
	
	
};
	
	
