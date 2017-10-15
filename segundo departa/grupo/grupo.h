class Grupo{
	private: 
	    //prototype de metodo
	     char* matriculax[100], nombrex[100], paternox[100], maternox[100], facultadx[100], grupox[10], carrerax[50], turnox[30];
	     char data[100000000];
	     char temp[5000];
	
	public:
		
		Grupo();
		
		//sets
		void matricula(char*);
		void nombre(char*);
		void paterno(char*);
		void materno(char*);
		void facultad(char*);
		void grupo(char*);
		void carrera(char*);
		void turno(char*);
		

		
		//gets
		char* getAll();

		
		
		

	
		
};
