#include <iostream>
#include "cineClass.h"
#include "functions.h"

int main(int argc, char** argv) {
	
		Cine* cinema = new Cine(); // object global
		
		//vars
		
		char* desc[50];
		char* names[50];
		char tempText[50];
		int chairs[50];
		
		int temp,temp2;//var global
		
				
		printf("Cuantas peliculas desea agregar?: ");
		scanf("%i", &temp);
		
		//obtener registro de peliculas
		for(int i=0; i<temp;i++){
		    printf("\n>>> Pelicula #%i:\n", i+1);
		    
		    //nombre
		    printf("Nombre: ");
		    scanf("%s",cinema->names[i]);
//		    names[i] = tempText;
//            names[i] = getString("Nombre: ");
//           cinema->names[i] = getString("Nombre: ");
            
		    
//		    //descripcion
//		    printf("Descripcion: ");
//		    scanf("%s", cinema->description[i]);
//		    desc[i] = tempText;
            cinema->description[i] = getString("Descripcion: ");
		    
		    
		     //asientos
		    printf("Numero de asientos: ");
		    scanf("%i", &temp2);
		    cinema->chairs[i] = temp2;
		}
		//fin de registro
		
		
		printf("\n\n\nNombre:%s", cinema->getNameByValue(0));
		printf("\nDescription:%s", cinema->getDescriptionByValue(0));
		printf("\nAsientos:%i", cinema->getChairsByValue(0));




	return 0;
}
