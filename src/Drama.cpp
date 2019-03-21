/*
 * @author Tomasz Słojewski
 */

#include <string>

#include "Drama.h"

using namespace std;

Drama :: Drama ()
{
	//do nothing
}

Drama :: Drama ( const string & title, const short & time )
{
	this->title = title;
	this->time = time;
}

/*
 * @return title of drama
 */
string Drama :: getTitle () const
{
	return title;
}

/*
 *   
 */
short Drama :: getTime () const
{
	return time;
}

void Drama :: operator = (const Drama & otherDrama)
{
	title = otherDrama.title;
	time = otherDrama.time;
}
