int factorial(int *);

int factorial(int x){
	
	int inicial = 1, retorno = 0;
	
	while (inicial < x){
		
		retorno = retorno + (inicial * (inicial-1));
		
		inicial = inicial + 1;
		
	}

  return retorno;
	
}
