#ifndef DRAMA_H
#define DRAMA_H

#include <string>


using namespace std;

class Drama
{
	private:
		string name;
		string type;
		//how long is (in minutes) 
		short time;
	
	public:
		Drama ( string name, string type, short time );
		string getName ();
		string getType ();
		short getTime ();

};




#endif //DRAMA_H
