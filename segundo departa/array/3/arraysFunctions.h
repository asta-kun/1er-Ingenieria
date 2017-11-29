int agregar(int a[], int* tam, int v){
	a[*tam] = v;
	*tam+=1;
	return tam-1;
}

int buscar(int a[], int tam, int v){
	int i =0;
	while(i< tam && a[i] != v){
		
		i+=1;
	}
	return i<tam?i:-1;
}

int agregarM(int a[], int x, int v){
	a[x] = v;
	return 1;
}

