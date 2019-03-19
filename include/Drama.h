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
		Drama ();
		Drama ( std::string title, std::string type, short time );
		std::string getTitle () const;
		std::string getType () const;
		short getTime () const;
		
		void operator = (const Drama & otherDrama);

};


#endif //DRAMA_H
