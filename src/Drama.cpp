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

Drama :: Drama ( string title, string type, short time )
{
	this->title = title;
	this->type = type;
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
 * @return type of drama
 */
string Drama :: getType () const
{
	return type;
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
	type = otherDrama.type;
	time = otherDrama.time;
}
