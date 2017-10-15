#include <iostream>
#include "empresas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Empresa* empresa = new Empresa();
	

	char EventoNombre[30], fecha[20], HoraInicio[20], HoraFin[20];
	int i=1,t ;


	
	do{
	 printf("Evento %i\n", i);
	   
	
	    printf("Evento ");
	    scanf("%s", EventoNombre);
	    empresa->nombre(EventoNombre); 
	
	    printf("Fecha ");
	    scanf("%s", fecha);
	    empresa->fecha(fecha); 
	
	    printf("Hora de inicio ");
	    scanf("%s", HoraInicio);
	    empresa->inicio(HoraInicio); 
	    
	    printf("Hora de fin ");
	    scanf("%s", HoraFin);
	    empresa->fin(HoraFin);
	    
	    
	
	    printf("\n0 para detener... ");
	    scanf("%i", &t);
          i = i +1;
	    
	
    }while(t != 0);
    

    

    
    printf("\nEventos:\n %s", empresa->Todos() );

    
	
	
	
	return 0;
}
