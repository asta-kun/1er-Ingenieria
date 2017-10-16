#include <iostream>
#include "almacenClass.h"
#include "functions.h"
#include <string.h>
#include <functional>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//init objects a global
	Almacen* ob1 = new Almacen();
	Almacen* ob2 = new Almacen();
	Almacen* ob3 = new Almacen();
	Almacen* ob4 = new Almacen();
	Almacen* ob5 = new Almacen();
	Almacen* ob6 = new Almacen();
	Almacen* ob7 = new Almacen();
	Almacen* ob8 = new Almacen();
	Almacen* ob9 = new Almacen();
	Almacen* ob10 = new Almacen();

    //vars
    int num = 1, select;
    int update;
    /*
	array values
	  0 > name
	  1 > code
	  2 > price
	  3 > count
	  4 > expiry
	*/
    
    //pedir productos #1
    ob1->setName("Leche");
    ob1->setCode("35463535");
    ob1->setPrice("35");
    ob1->setCount(60);
    ob1->setExpiry("25/05/2017");

    
    //pedir productos #2
    ob2->setName("Arroz");
    ob2->setCode("426356");
    ob2->setPrice("13");
    ob2->setCount(70);
    ob2->setExpiry("22/09/2017");
 
    
    //pedir productos #3
    ob3->setName("Arina");
    ob3->setCode("357537");
    ob3->setPrice("80");
    ob3->setCount(556);
    ob3->setExpiry("08/05/2017");
    num+=1;

    //pedir productos #4
    ob4->setName("Cafe");
    ob4->setCode("6764846");
    ob4->setPrice("5");
    ob4->setCount(590);
    ob4->setExpiry("25/05/2019");
    num+=1;
     //pedir productos #5
    ob5->setName("Chocolate");
    ob5->setCode("5764868");
    ob5->setPrice("150");
    ob5->setCount(34);
    ob5->setExpiry("15/12/2017");
    num+=1;

    //pedir productos #6
    ob6->setName("Pastel");
    ob6->setCode("6856857");
    ob6->setPrice("400");
    ob6->setCount(15);
    ob6->setExpiry("25/02/2019");
    num+=1;
     //pedir productos #7
    ob7->setName("Plumas");
    ob7->setCode("46537547");
    ob7->setPrice("14");
    ob7->setCount(80);
    ob7->setExpiry("Nunca");
    num+=1;

    //pedir productos #8
    ob8->setName("Mochila");
    ob8->setCode("68658578");
    ob8->setPrice("600");
    ob8->setCount(68);
    ob8->setExpiry("Nunca");
    num+=1;
 
    //pedir productos #9
    ob9->setName("Playeras");
    ob9->setCode("474574");
    ob9->setPrice("330");
    ob9->setCount(56);
    ob9->setExpiry("Nunca");
    num+=1;

    //pedir productos #10
    ob10->setName("Zapatos");
    ob10->setCode("5757467");
    ob10->setPrice("570");
    ob10->setCount(90);
    ob10->setExpiry("Nunca");
    num+=1;
    
    //FIN DE PEDIR INFO
    /*
    //pedir productos #1
    ob1->setName(getName(num));
    ob1->setCode(getCode());
    ob1->setPrice(getPrice());
    
    ob1->setCount(getCount());
    ob1->setExpiry(getExpiry());
    num+=1;
    
    //pedir productos #2
    ob2->setName(getName(num));
    ob2->setCode(getCode());
    ob2->setPrice(getPrice());
    ob2->setCount(getCount());
    ob2->setExpiry(getExpiry());
    num+=1;
    
    //pedir productos #3
    ob3->setName(getName(num));
    ob3->setCode(getCode());
    ob3->setPrice(getPrice());
    ob3->setCount(getCount());
    ob3->setExpiry(getExpiry());
    num+=1;

    //pedir productos #4
    ob4->setName(getName(num));
    ob4->setCode(getCode());
    ob4->setPrice(getPrice());
    ob4->setCount(getCount());
    ob4->setExpiry(getExpiry());
    num+=1;
     //pedir productos #5
    ob5->setName(getName(num));
    ob5->setCode(getCode());
    ob5->setPrice(getPrice());
    ob5->setCount(getCount());
    ob5->setExpiry(getExpiry());
    num+=1;

    //pedir productos #6
    ob6->setName(getName(num));
    ob6->setCode(getCode());
    ob6->setPrice(getPrice());
    ob6->setCount(getCount());
    ob6->setExpiry(getExpiry());
    num+=1;
     //pedir productos #7
    ob7->setName(getName(num));
    ob7->setCode(getCode());
    ob7->setPrice(getPrice());
    ob7->setCount(getCount());
    ob7->setExpiry(getExpiry());
    num+=1;

    //pedir productos #8
    ob8->setName(getName(num));
    ob8->setCode(getCode());
    ob8->setPrice(getPrice());
    ob8->setCount(getCount());
    ob8->setExpiry(getExpiry());
    num+=1;
 
    //pedir productos #9
    ob9->setName(getName(num));
    ob9->setCode(getCode());
    ob9->setPrice(getPrice());
    ob9->setCount(getCount());
    ob9->setExpiry(getExpiry());
    num+=1;

    //pedir productos #10
    ob10->setName(getName(num));
    ob10->setCode(getCode());
    ob10->setPrice(getPrice());
    ob10->setCount(getCount());
    ob10->setExpiry(getExpiry());
    num+=1;
    
    //FIN DE PEDIR INFO
    */
    
    do{
    	//imprimir el nombre de los productos
	printf("\n\nProductos en almacen(nombre y disponibles):\n");
    printf("1:%s ==> %i\n", ob1->getName(), ob1->getCount() );
    printf("2:%s ==> %i\n", ob2->getName(), ob2->getCount() );
    printf("3:%s ==> %i\n", ob3->getName(), ob3->getCount() );
    printf("4:%s ==> %i\n", ob4->getName(), ob4->getCount() );
    printf("5:%s ==> %i\n", ob5->getName(), ob5->getCount() );
    printf("6:%s ==> %i\n", ob6->getName(), ob6->getCount() );
    printf("7:%s ==> %i\n", ob7->getName(), ob7->getCount() );
    printf("8:%s ==> %i\n", ob8->getName(), ob8->getCount() );
    printf("9:%s ==> %i\n", ob9->getName(), ob9->getCount() );
    printf("10:%s ==> %i\n", ob10->getName(), ob10->getCount() );
    
    //pedir cual editar
    printf(">>Ingrese el digito para editar el inventario: ");
    scanf("%i", &select);

    
    printf("Desea sumar o restar, 1 para sumar y 0 para restar: ");
    
    int select2;
    scanf("%i", &select2);
    
    printf("Ingrese cuantos productos desea afectar: ");
    scanf("%i", &update);
    
    if(select2 == 1){
    	    	switch(select){
    		case 1:
    			ob1->setSuma(update);
    		break;
    		case 2:
    			ob2->setSuma(update);
    		break;
    		case 3:
    			ob3->setSuma(update);
    		break;
    		case 4:
    			ob4->setSuma(update);
    		break;
    		case 5:
    			ob5->setSuma(update);
    		break;
    		case 6:
    			ob6->setSuma(update);
    		break;
    		case 7:
    			ob7->setSuma(update);
    		break;
    		case 8:
    			ob8->setSuma(update);
    		break;
    		case 9:
    			ob9->setSuma(update);
    		break;
    		case 10:
    			ob10->setSuma(update);
    		break;

            default:
	     	//error, no esta entre 1 y 10
	     	printf("ERROR: Ingrese un digito entre 1 y 10...");		
		}
		
		//END UPDATE 
	}else{
		    	    	switch(select){
    		case 1:
    			ob1->setResta(update);
    		break;
    		case 2:
    			ob2->setResta(update);
    		break;
    		case 3:
    			ob3->setResta(update);
    		break;
    		case 4:
    			ob4->setResta(update);
    		break;
    		case 5:
    			ob5->setResta(update);
    		break;
    		case 6:
    			ob6->setResta(update);
    		break;
    		case 7:
    			ob7->setResta(update);
    		break;
    		case 8:
    			ob8->setResta(update);
    		break;
    		case 9:
    			ob9->setResta(update);
    		break;
    		case 10:
    			ob10->setResta(update);
    		break;

            default:
	     	//error, no esta entre 1 y 10
	     	printf("ERROR: Ingrese un digito entre 1 y 10...");		
		}
		
	}
    
    	


    
    }while(1);

    
    
 

	return 0;
}
