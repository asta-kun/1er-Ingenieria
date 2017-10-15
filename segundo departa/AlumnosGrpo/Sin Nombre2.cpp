class Agenda{
	private: 
	    //prototype de metodo
	     char* names[100];
	     char* address[100];
	     char* phones[100];
	     char* mails[100];
	     char data[100000000];
	     char temp[5000];
	    int count_values;
	
	public:
		
		Agenda();
		
		//sets
		void setName(int, char*);
		void setAddress(int, char*);
		void setPhone(int, char*);
		void setMail(int, char*);
		
		

		
		//gets
		int getNewColumn(); //retorna un espacio vacio en el array
		int getCountColumn();
		char* getAll();
		char* getName(int);
		char* getAddress(int);
		char* getPhone(int);
		char* getMail(int);
		
		
		

	
		
};
