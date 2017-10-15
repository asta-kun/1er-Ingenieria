class Agenda{
	private: 
	    //prototype de metodo
	    char* content[100][4];
	    int count_values;
	
	public:
		
		Agenda();
		//sets
		void setName(char*);
		void setAddress(char*);
		void setPhone(char*);
		void setMail( char * );
		
		
		//gets
		char* setName();
		char* setAddress();
		char* setPhone();
		char* setMail();
		
		
	
		
};
