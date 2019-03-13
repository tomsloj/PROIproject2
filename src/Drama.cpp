/*
 * @author Tomasz Słojewski
 */

#include <string>

#include "Drama.h"

using namespace std;

Drama :: Drama ( string title, string type, short time )
{
	this->title = title;
	this->type = type;
	this->time = time;
}

string Drama :: getTitle ()
{
	return title;
}

string Drama :: getType ()
{
	return type;
}

short Drama :: getTime ()
{
	return time;
}
