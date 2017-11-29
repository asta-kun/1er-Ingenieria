#include <iostream>
#include "wallet.h"
#include <string.h>


//sets
Wallet::Wallet(){
	//inicializar valores
	    int wallet_total=0;
	    int wallet_credit=0;
	    
}


void Wallet::setTotal(int x){
	wallet_total = x;
}


void Wallet::setGasto(int x){
	wallet_total -= x;
}



//gets
int Wallet::getTotal(){
	return wallet_total;
}



