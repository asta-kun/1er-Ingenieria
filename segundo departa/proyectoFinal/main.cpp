#include <iostream>
#include "cineClass.h"


	
int main(int argc, char** argv) {
	
		Cine* cinema = new Cine(); // object global

        int peliculas_count = 0, select; 
        char temp[50], temp2[50], temp3[50], temp4[50], temp5[5], s1[100], s2[100], s3[100], s4[100], s5[100];
        printf("DATO: control + Z para terminar lineas de sinopsis... \n");
        
        
              ///registrar peliculas
        	 printf("Pelicula #%i:", (peliculas_count+1) );
        	 scanf("%s", temp);
        	 cinema->names[0] = temp; // guardar el nombre
        	 
        	 printf("Sinopsis: ");
        	 scanf("%s", s1);
        	 cinema->description[0] = s1; // guardar sipnosis
        	 
        	 printf("Numero de asientos: ");
        	 scanf("%i", &cinema->chairs[0] ); // guardar asientos
        	 
        	 
        	 peliculas_count+=1; 
        	 
        	 printf("\nPelicula #%i:", (peliculas_count+1) );
        	 scanf("%s", temp2);
        	 cinema->names[1] = temp2;// guardar el nombre
        	 
        	 printf("Sinopsis: ");
        	 scanf("%s", s2);
        	 cinema->description[1] = s2; // guardar sipnosis
        	 
        	 printf("Numero de asientos: ");
        	 scanf("%i", &cinema->chairs[1] ); // guardar asientos
        	 
        	 peliculas_count+=1;
        	 
        	 printf("\nPelicula #%i:", (peliculas_count+1) );
        	 scanf("%s", temp3);
        	 cinema->names[2] = temp3;// guardar el nombre
        	 
        	 printf("Sinopsis: ");
        	 scanf("%s", s3);
        	 cinema->description[2] = s3; // guardar sipnosis
        	 
        	 printf("Numero de asientos: ");
        	 scanf("%i", &cinema->chairs[2] ); // guardar asientos
        	 
        	 peliculas_count+=1;
        	 
        	 printf("\nPelicula #%i:", (peliculas_count+1) );
        	 scanf("%s", temp4);
        	 cinema->names[3] = temp4;// guardar el nombre
        	 
        	 printf("Sinopsis: ");
        	 scanf("%s", s4);
        	 cinema->description[3] = s4; // guardar sipnosis
        	 
        	 printf("Numero de asientos: ");
        	 scanf("%i", &cinema->chairs[3] ); // guardar asientos
        	 
        	 peliculas_count+=1;
        	 
        	 printf("\nPelicula #%i:", (peliculas_count+1) );
        	 scanf("%s", temp5);
        	 cinema->names[4] = temp5;// guardar el nombre
        	 
        	 printf("Sinopsis: ");
        	 scanf("%s", s5);
        	 cinema->description[4] = s5; // guardar sipnosis
        	 
        	 printf("Numero de asientos: ");
        	 scanf("%i", &cinema->chairs[4] ); // guardar asientos
        	 
        	 //fin de registro
        	 
        	 
        	 
        	 
        	 //proceso para vender peliculas
        	 while(1){
        	 	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        	 	
        	 	printf("¿Que pelicula desea ver?\n\n>>>Peliculas:\n");
        	 	int tmpCount = 0;
        	 	while(tmpCount < 5){
        	 		printf("%i: %s (asientos: %i)\n     Sinopsis:%s\n\n", (tmpCount+1), cinema->names[tmpCount], cinema->chairs[tmpCount], cinema->description[tmpCount] );
        	 		tmpCount+=1;
				 }
				 
				 
				 //venta de asientos
				 printf("\n>Ingrese el numero de la pelicula: ");
				 scanf("%i", &select);
				 
				 switch(select){
				 	case 1:
				 		//pelicula #1
				 		if(cinema->chairs[0]){
				 			//se puede vender
				 			cinema->chairs[0]-=1;
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
				 	break;
				 	
				 	
				 	case 2:
				 		//pelicula #1
				 		if(cinema->chairs[1]){
				 			//se puede vender
				 			cinema->chairs[1]-=1;
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
				 	break;
				 	
				 	
				 	case 3:
				 		//pelicula #1
				 		if(cinema->chairs[2]){
				 			//se puede vender
				 			cinema->chairs[2]-=1;
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
				 	break;
				 	
				 	
				 	case 4:
				 		//pelicula #1
				 		if(cinema->chairs[3]){
				 			//se puede vender
				 			cinema->chairs[3]-=1;
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
				 	break;
				 	
				 	
				 	case 5:
				 		//pelicula #1
				 		if(cinema->chairs[4]){
				 			//se puede vender
				 			cinema->chairs[4]-=1;
				 			printf(">>>> VENDIDO\n");
						 }else{
						 	printf(">>>> NO VENDIDO (ya no hay disponibles)\n");
						 }
				 	break;
				 	
				 	
				 }// fin switch
				 
				 
        	 	char x[10];
        	 	printf("\n\nOprima cualquier tecla para continuar...\n");scanf("%s",x);
        	 	
			 }
        	 
        	 
        	 


		

	printf("peli: %i", cinema->chairs[0] );
	
	return 0;
}
