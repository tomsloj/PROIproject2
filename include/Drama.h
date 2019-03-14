#ifndef DRAMA_H
#define DRAMA_H

#include <string>


class Drama
{
	private:
		std::string title;
		std::string type;
		//how long is (in minutes) 
		short time;
	
	public:
		Drama ( std::string title = "", std::string type = "", short time = 0 );
		std::string getTitle () const;
		std::string getType () const;
		short getTime () const;

};


#endif //DRAMA_H
