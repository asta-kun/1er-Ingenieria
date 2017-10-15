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
    char update[10];
    /*
	array values
	  0 > name
	  1 > code
	  2 > price
	  3 > count
	  4 > expiry
	*/
    
    
    
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
    
    do{
    	//imprimir el nombre de los productos
	printf("\n\nProductos en almacen(nombre y disponibles):\n");
    printf("1:%s ==> %s\n", ob1->getName(), ob1->getCount() );
    printf("2:%s ==> %s\n", ob2->getName(), ob2->getCount() );
    printf("3:%s ==> %s\n", ob3->getName(), ob3->getCount() );
    printf("4:%s ==> %s\n", ob4->getName(), ob4->getCount() );
    printf("5:%s ==> %s\n", ob5->getName(), ob5->getCount() );
    printf("6:%s ==> %s\n", ob6->getName(), ob6->getCount() );
    printf("7:%s ==> %s\n", ob7->getName(), ob7->getCount() );
    printf("8:%s ==> %s\n", ob8->getName(), ob8->getCount() );
    printf("9:%s ==> %s\n", ob9->getName(), ob9->getCount() );
    printf("10:%s ==> %s\n", ob10->getName(), ob10->getCount() );
    
    //pedir cual editar
    printf(">>Ingrese el digito para editar el inventario: ");
    scanf("%i", &select);
    printf("Ingrese el numero de articulos totales actuales: ");
    scanf("%s", update);
    	
    	switch(select){
    		case 1:
    			ob1->setCount(update);
    		break;
    		case 2:
    			ob2->setCount(update);
    		break;
    		case 3:
    			ob3->setCount(update);
    		break;
    		case 4:
    			ob4->setCount(update);
    		break;
    		case 5:
    			ob5->setCount(update);
    		break;
    		case 6:
    			ob6->setCount(update);
    		break;
    		case 7:
    			ob7->setCount(update);
    		break;
    		case 8:
    			ob8->setCount(update);
    		break;
    		case 9:
    			ob9->setCount(update);
    		break;
    		case 10:
    			ob10->setCount(update);
    		break;

            default:
	     	//error, no esta entre 1 y 10
	     	printf("ERROR: Ingrese un digito entre 1 y 10...");		
		}
		
		//END UPDATE 

    
    }while(1);

    
    
 

	return 0;
}
