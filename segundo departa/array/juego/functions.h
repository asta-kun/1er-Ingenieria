char* table[3][3];
int getPositionStatus(int row, int column){
   //verifica si el lugar elegido esta disponible
   if(!table[row][column] ){
   	return 1; //esta disponible
   }else{
   	return 0; // no esta disponbile
   }
   
};

void setPosition(int row, int column, int user){
	//1 es X y 0 es O
	if(user == 1){
		table[row][column] = "X";
	}else{
		table[row][column] = "O";
	}
	
	
};


char* getPosition(int row, int column){
	//obtiene el valor del lugar
	if(table[row][column] == "O" || table[row][column]=="X"){
	return table[row][column];
}else{
	return "-";
}
}

int isWinner(int user){
	//obtener si es O o X
	char* username;
	if(user == 1){
		username = "X";
	}else{
		username = "O";
	}
	
	if( table[0][0] == username &&table[1][0] == username && table[2][0]  ){
		return 1;
	}else if(table[0][1] == username &&table[1][1] == username && table[2][1] == username ){
		return 1;
	}else if(table[0][2] == username &&table[1][2] == username && table[2][2] == username ){
		return 1;
	}else if(table[0][0] == username &&table[0][1] == username && table[0][2] == username ){
		return 1;
	}else if(table[1][0] == username &&table[1][1] == username && table[1][2] == username ){
		return 1;
	}else if(table[2][0] == username &&table[2][1] == username && table[2][2] == username ){
		return 1;
	}else if(table[0][0] == username &&table[1][1] == username && table[2][2] == username ){
		return 1;
	}else if(table[2][0] == username &&table[1][1] == username && table[0][2] == username ){
		return 1;
	}else{
		return 0;// aun no gana
	}
	
	
}


void getMap() {
	printf("                 %s ===  %s  ===  %s\n", getPosition(0, 0), getPosition(1,0), getPosition(2,0) );
	printf("               ===================\n" ); 
  	printf("                 %s ===  %s  ===  %s\n", getPosition(0, 1), getPosition(1,1), getPosition(2,1) );
	printf("               ===================\n" ); 
	printf("                 %s ===  %s  ===  %s\n", getPosition(0, 2), getPosition(1,2), getPosition(2,2));
}
