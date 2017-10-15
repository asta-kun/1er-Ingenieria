#include <iostream>
#include "grupo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Grupo* grupoC = new Grupo();
	Grupo* grupoC2 = new Grupo();
	Grupo* grupoC3 = new Grupo();
	Grupo* grupoC4 = new Grupo();
	Grupo* grupoC5 = new Grupo();
	

	char matricula[100], nombre[100], paterno[100], materno[100], facultad[100], grupo[10], carrera[50], turno[30];
	int i = 0, select, stop;


	
//alumno
	
	    printf("\nIngrese el alumno #%i\n", (i+1));
	
	    printf("Matricula: ");
	    scanf("%s", matricula);
	    grupoC->matricula(matricula); 
	
	    printf("Nombre: ");
	    scanf("%s", nombre);
	    grupoC->nombre(nombre); 
	
	    printf("Apellido paterno: ");
	    scanf("%s", paterno);
	    grupoC->paterno(paterno); 
	    
	    printf("Apellido materno: ");
	    scanf("%s", materno);
	    grupoC->materno(materno);
	    
	    
		    printf("Facultad: ");
	    scanf("%s", facultad);
	    grupoC->facultad(facultad);
	    
	    
		    printf("Grupo: ");
	    scanf("%s", grupo);
	    grupoC->grupo(grupo);
	    
	    
		    printf("Carrera: ");
	    scanf("%s", carrera);
	    grupoC->carrera(carrera);
	    
	    		    printf("Turno: ");
	    scanf("%s", turno);
	    grupoC->turno(turno);
	    
	    
	
	    i+=1;
	    
//fin alumno






//alumno
	
	    printf("\nIngrese el alumno #%i\n", (i+1));
	
	    printf("Matricula: ");
	    scanf("%s", matricula);
	    grupoC2->matricula(matricula); 
	
	    printf("Nombre: ");
	    scanf("%s", nombre);
	    grupoC2->nombre(nombre); 
	
	    printf("Apellido paterno: ");
	    scanf("%s", paterno);
	    grupoC2->paterno(paterno); 
	    
	    printf("Apellido materno: ");
	    scanf("%s", materno);
	    grupoC2->materno(materno);
	    
	    
		    printf("Facultad: ");
	    scanf("%s", facultad);
	    grupoC2->facultad(facultad);
	    
	    
		    printf("Grupo: ");
	    scanf("%s", grupo);
	    grupoC2->grupo(grupo);
	    
	    
		    printf("Carrera: ");
	    scanf("%s", carrera);
	    grupoC2->carrera(carrera);
	    
	    		    printf("Turno: ");
	    scanf("%s", turno);
	    grupoC2->turno(turno);
	    
	    
	
	    i+=1;
	    
//fin alumno





//alumno
	
	    printf("\nIngrese el alumno #%i\n", (i+1));
	
	    printf("Matricula: ");
	    scanf("%s", matricula);
	    grupoC3->matricula(matricula); 
	
	    printf("Nombre: ");
	    scanf("%s", nombre);
	    grupoC3->nombre(nombre); 
	
	    printf("Apellido paterno: ");
	    scanf("%s", paterno);
	    grupoC3->paterno(paterno); 
	    
	    printf("Apellido materno: ");
	    scanf("%s", materno);
	    grupoC3->materno(materno);
	    
	    
		    printf("Facultad: ");
	    scanf("%s", facultad);
	    grupoC3->facultad(facultad);
	    
	    
		    printf("Grupo: ");
	    scanf("%s", grupo);
	    grupoC3->grupo(grupo);
	    
	    
		    printf("Carrera: ");
	    scanf("%s", carrera);
	    grupoC3->carrera(carrera);
	    
	    		    printf("Turno: ");
	    scanf("%s", turno);
	    grupoC3->turno(turno);
	    
	    
	
	    i+=1;
	    
//fin alumno



//alumno
	
	    printf("\nIngrese el alumno #%i\n", (i+1));
	
	    printf("Matricula: ");
	    scanf("%s", matricula);
	    grupoC4->matricula(matricula); 
	
	    printf("Nombre: ");
	    scanf("%s", nombre);
	    grupoC4->nombre(nombre); 
	
	    printf("Apellido paterno: ");
	    scanf("%s", paterno);
	    grupoC4->paterno(paterno); 
	    
	    printf("Apellido materno: ");
	    scanf("%s", materno);
	    grupoC4->materno(materno);
	    
	    
		    printf("Facultad: ");
	    scanf("%s", facultad);
	    grupoC4->facultad(facultad);
	    
	    
		    printf("Grupo: ");
	    scanf("%s", grupo);
	    grupoC4->grupo(grupo);
	    
	    
		    printf("Carrera: ");
	    scanf("%s", carrera);
	    grupoC4->carrera(carrera);
	    
	    		    printf("Turno: ");
	    scanf("%s", turno);
	    grupoC4->turno(turno);
	    
	    
	
	    i+=1;
	    
//fin alumno




//alumno
	
	    printf("\nIngrese el alumno #%i\n", (i+1));
	
	    printf("Matricula: ");
	    scanf("%s", matricula);
	    grupoC5->matricula(matricula); 
	
	    printf("Nombre: ");
	    scanf("%s", nombre);
	    grupoC5->nombre(nombre); 
	
	    printf("Apellido paterno: ");
	    scanf("%s", paterno);
	    grupoC5->paterno(paterno); 
	    
	    printf("Apellido materno: ");
	    scanf("%s", materno);
	    grupoC5->materno(materno);
	    
	    
		    printf("Facultad: ");
	    scanf("%s", facultad);
	    grupoC5->facultad(facultad);
	    
	    
		    printf("Grupo: ");
	    scanf("%s", grupo);
	    grupoC5->grupo(grupo);
	    
	    
		    printf("Carrera: ");
	    scanf("%s", carrera);
	    grupoC5->carrera(carrera);
	    
	    		    printf("Turno: ");
	    scanf("%s", turno);
	    grupoC5->turno(turno);
	    
	    
//fin alumno




    

    
    printf("\nEl grupo:\n ");
    
     printf("\n\n>>>Alumno #1: %s", grupoC->getAll() );
      printf("\n\n>>>Alumno #2: %s", grupoC2->getAll() );
       printf("\n\n>>>Alumno #3: %s", grupoC3->getAll() );
        printf("\n\n>>>Alumno #4: %s", grupoC4->getAll() );
         printf("\n\n>>>Alumno #5: %s", grupoC5->getAll() );

    
	
	
	
	return 0;
}
