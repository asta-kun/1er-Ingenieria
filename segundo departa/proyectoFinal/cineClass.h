class Cine{
			
	public:
	   
		char* names[50];//nombres
		char* description[50]; // sinopsis
		int chairs[50];// asientos

	   Cine();
		
//		//sets
//		void saveNames(char*[50], int);
//		void saveDescriptions(char*[50], int);
//		void saveChairs(int*, int);
		
		//gets
		char* getNameByValue(int);
		char* getDescriptionByValue(int);
		int getChairsByValue(int);

};
