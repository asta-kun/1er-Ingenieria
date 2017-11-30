#include <iostream>
#include "cineClass.h"

int main(int argc, char** argv) {
	
		Cine* cinema = new Cine(); // object global
		
		//vars
		char* desc[50];
		char* names[50];
		char* tempText[50];

		int chairs[50];
		
		int temp,temp2;//var global
		
				
		printf("Cuantas peliculas desea agregar?: ");
		scanf("%i", &temp);
		
		cinema->peliculasCount = temp; //guardar total de peliculas
		
		//obtener registro de peliculas
		for(int i=0; i<temp;i++){
		    printf("\n>>> Pelicula #%i:\n", i+1);
		    
		    //nombre
		    printf("Nombre: ");
		    scanf("%s",tempText[i]);
		    cinema->setName(i, tempText[i]);
            
		    
		    //descripcion
		    printf("Descripcion: ");
		    scanf("%s", tempText[i]);
		    cinema->setDescription(i, tempText[i]);
		    
		    
		     //asientos
		    printf("Numero de asientos: ");
		    scanf("%i", &temp2);
		    cinema->setChairs(i, temp2);
		}
		//fin de registro
		
		

		
		//imprimir todas las peliculas para su venta
		while(true){
			//while permanente para no permitir el cierre del script
		system("CLS()"); //clear
		printf("   ============= CINE =============\n\n");
		
			//output movies
			for(int x=0;x < (cinema->peliculasCount);x++){
				printf("#%i: %s (asientos: %i)\n     Sinopsis:%s\n\n", x+1, cinema->getNameByValue(x), cinema->getChairsByValue(x), cinema->getDescriptionByValue(x));
			}
			
			
			//vender...
			printf("Que pelicula desea ver?: ");
			scanf("%i", &temp2);
			
			if(cinema->setSaleByValue(temp2-1)){
				 			//se puede vender
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
			
			system("PAUSE()"); //stop
			
		}//end while
		
		

	return 0;
}
