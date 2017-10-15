#include <iostream>
#include "classAgenda.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Agenda* agenda = new Agenda();
	

	char name[50], address[100], phone[15], mail[50];
	int num, select, stop;


	
	do{
	
	    num = agenda->getNewColumn(); //obtener una id vacia
	
	    printf("Ingrese el contacto #%i\n", (num+1));
	
	    printf("Nombre: ");
	    scanf("%s", name);
	    agenda->setName(num, name); //almacenar el name
	
	    printf("Dirreccion: ");
	    scanf("%s", address);
	    agenda->setAddress(num, address); //almacenar la direccion
	
	    printf("Telefono: ");
	    scanf("%s", phone);
	    agenda->setPhone(num, phone); //almacenar el phone
	    
	    printf("Correo: ");
	    scanf("%s", mail);
	    agenda->setMail(num, mail); //almacenar el mail
	    
	    
	
	    printf("\n\n>>> Desea agregar otro? (1 Si o 0 No): ");
	    scanf("%i", &stop);

	    
	
    }while(stop == 1);
    

    

    
    printf("\nTu agenda:\n %s", agenda->getAll() );

    
	
	
	
	return 0;
}
