class Almacen{
	private: 
	    //prototype de metodo
	    char name[100], expiry_date[50], code[20], price[10];
	    int count;

	
	public: //publics
		Almacen();
		//sets
		void setName(char*);
		void setExpiry(char*);
		void setCode(char*);
		void setCount(int);
		void setPrice(char*);
		void setResta(int);
		void setSuma(int);
		
		
		//gets
		char* getName();
		char* getExpiry();
		char* getCode();
		int getCount();
		char* getPrice();	
		
};
