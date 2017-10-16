char* getName(int num){
	char temp_value[50]; // para ir recibiendo los valores de los pructos
	printf(">>>Producto #%i\nNombre: ", num);
	scanf("%s", temp_value);
	return temp_value; // retornar valor
}

char* getCode(){
	char temp_value[50]; // para ir recibiendo los valores de los pructos
	printf("Codigo de barra: ");
	scanf("%s", temp_value);
	return temp_value; // retornar valor
}

char* getPrice(){
	char temp_value[50]; // para ir recibiendo los valores de los pructos
	printf("Precio: $");
	scanf("%s", temp_value);
	return temp_value; // retornar valor
}

int getCount(){
	int temp_value; // para ir recibiendo los valores de los pructos
	printf("Numero de productos totales en almacen: ");
	scanf("%i", &temp_value);
	return temp_value; // retornar valor
}

char* getExpiry(){
	char temp_value[50]; // para ir recibiendo los valores de los pructos
	printf("Fecha de expiracion: ");
	scanf("%s", temp_value);
	return temp_value; // retornar valor
}









