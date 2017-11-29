#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {

int userTemp=1, x, y, tempX, positions=9;
char* userName;
getMap();
do{
	//cambiar userTemp
	if(userTemp){
		userTemp=0; // es O
		userName = "O";
		
	}else{
		userTemp=1;// es X
		userName = "X";
	}
	
	printf("\nTurno: %s \n", userName);
	
	do{
		//ejecutar hasta que el lugar este libre
	printf("Ingrese sus lugares (X,Y): ");
	scanf("%i %i", &x, &y);
      }while(getPositionStatus(x,y) !=  1);
      //si llega aqui es que el turno elegido is avaliable
      setPosition(x, y, userTemp);
	  positions-=1;
	
	
	getMap();
}while(isWinner(userTemp) != 1 && positions);

if(!positions){
	userName = "Empate";
}

printf("El ganador es: %s", userName);
}
