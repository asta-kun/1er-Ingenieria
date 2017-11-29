class Autos{
	private: 
	    //prototype de metodo
	    char name[100], placas[50], peso[20], precio[10];
	    int status;

	
	public: //publics
		Autos();
		//sets
		void setName(char*);
		void setPlacas(char*);
		void setPeso(char*);
		void setPrecio(char*);
		void updateStatus();
		
		
		//gets
		char* getName();
		char* getPlacas();
		char* getPeso();
		char* getPrecio();
		char* getStatus();	
		
};
