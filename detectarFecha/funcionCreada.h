//prototype function

void dividirFecha( long, int*, int*, int*);


int esAnioBisiesto(int);

void dividirFecha(long f, int* d, int* m, int* a){
	int resto;
	
	*a = f / 10000;
	resto = f%10000;
	*m = resto/100;
	*d = resto %100;
}


int esAnioBisiesto(int a){
	int multiplo4, multiplo100, multiplo400;
	
	multiplo4 = a%4==0;
	multiplo100 = a%100==0;
	multiplo400 = a%400==0;
	
	
	return(multiplo4 && !multiplo100) || multiplo400;
	
	
}
