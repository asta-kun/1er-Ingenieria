#include <iostream>
#include <thread>

int a =8,b=4,c=3, s, r, m, d;

void suma(){
	s = a +b+c;
//	return s;
}

void multi(){
	m = a *b *c;
//	return m;
}


void resta(){
	r = a -b -c;
//	return r;
}

void division(){
	d = a /b;
//	return d;
}


int main(){
	std::thread tsuma (suma);
	std::thread tresta (resta);
	std::thread tmulti (multi);
	std::thread tdiv (division);
	
	tsuma.join();
	tresta.join();
	tmulti.join();
	tdiv.join();
	
	printf("La suma es %i\n", s);
	printf("La resta es %i\n", r);
	printf("La multiplicacion es %i\n", m);
	printf("La division es %i\n", d);
	
	return 0;
}
