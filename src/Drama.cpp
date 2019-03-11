/*
 * @author Tomasz Słojewski
 */

#include <string>

#include "Drama.h"

using namespace std;

Drama :: Drama ( string name, string type, short time )
{
	this->name = name;
	this->type = type;
	this->time = time;
}

string Drama :: getName ()
{
	return name;
}

string Drama :: getType ()
{
	return type;
}

short Drama :: getTime ()
{
	return time;
}
