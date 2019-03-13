#ifndef DRAMA_H
#define DRAMA_H

#include <string>


using namespace std;

class Drama
{
	private:
		string title;
		string type;
		//how long is (in minutes) 
		short time;
	
	public:
		Drama ( string title = "", string type = "", short time = 0 );
		string getTitle () const;
		string getType () const;
		short getTime () const;

};




#endif //DRAMA_H
