class Materia{
	private: 
	    //prototype de metodo
	    char name_materia[50];
	    float calificacion1, calificacion2, calificacion3, promedio;
	
	public:
		
		Materia();
		//sets
		void setCal1(float);
		void setCal2(float);
		void setCal3(float);
		void setName( char * );
		
		
		//gets
		float getCal1();
		float getCal2();
		float getCal3();
		float getPromedio();
		char* getName();
		
		
	
		
};
