/*
 * @author Tomasz Słojewski
 */

#ifndef DRAMA_H
#define DRAMA_H

#include <string>

class Drama
{
	private:
		std::string title;
		//how long is (in minutes) 
		short time;
	
	public:
		Drama ();
		Drama ( const std::string & title, const short & time );
		std::string getTitle () const;
		short getTime () const;
		
		void operator = (const Drama & otherDrama);

};

#endif //DRAMA_H
