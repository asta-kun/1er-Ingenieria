//prototype function
int longitud(char[]);
int vacio(char[]);

int vacio(char palabra[]){
	return palabra[0] == '\0';
	
}



int longitud(char palabra[]){
	int l = 0;
	
	
	while(palabra[l] != '\0'){
		l = l +1;
	}
	
	
	
	return l;
}
