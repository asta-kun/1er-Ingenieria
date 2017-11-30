class Cine{
		char* names[50];//nombres
		char* description[50]; // sinopsis
		int chairs[50];// asientos
			
	public:
	   
	   int peliculasCount; //guardara el total de peliculas


	   Cine();
		
		//sets
		void setName(int, char*);
		void setDescription(int, char*);
		void setChairs(int, int);
		bool setSaleByValue(int);
		
		//gets
		char* getNameByValue(int);
		char* getDescriptionByValue(int);
		int getChairsByValue(int);

};
