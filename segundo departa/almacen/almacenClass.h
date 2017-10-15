class Almacen{
	private: 
	    //prototype de metodo
	    char name[100], expiry_date[50], count[10], code[20], price[10];

	
	public: //publics
		Almacen();
		//sets
		void setName(char*);
		void setExpiry(char*);
		void setCode(char*);
		void setCount(char*);
		void setPrice(char*);
		
		//gets
		char* getName();
		char* getExpiry();
		char* getCode();
		char* getCount();
		char* getPrice();	
		
};
