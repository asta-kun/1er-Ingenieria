#include <iostream>
#include "cajero.h"


Cajero::Cajero(){
	saldo = 0.0;
}


float Cajero::consultar(){
	return saldo;
}

float Cajero::retirar(float cantidad){
	if(cantidad <= saldo){
		saldo -= cantidad;
		return saldo;
	}else{
		return 0;
	}
}


void Cajero::depositar(float cantidad){
	saldo += cantidad;
}
