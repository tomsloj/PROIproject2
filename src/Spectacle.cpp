/*
 * @author Tomasz Słojewski
 */

#include <string>

#include "Spectacle.h"

using namespace std;

Spectacle :: Spectacle ()
{
	
}
void Spectacle :: setDirector(string name, string surname, int age)
{
	director = Employee( name, surname, age );
}

void Spectacle :: setDrama ( string title, string type, short time )
{
	drama = Drama ( title, type, time ); 
}

void Spectacle :: setViewersNumber ( short number )
{
	viewers = number;
}

void Spectacle :: addActor ( Employee & actor )
{
	actors.push_back( actor );
}

void Spectacle :: addActor ( vector<Employee>& actors )
{
	for( unsigned int i = 0; i < actors.size(); ++i )
	{
		this->actors.push_back( actors[ i ] );
	} 
}

void Spectacle :: addViewers ( short people, int cash )
{
	viewers += people;
	salary += cash;
}




