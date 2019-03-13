/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <iostream>

#include "Spectacle.h"

using namespace std;

template<class Type>
Spectacle<Type> :: Spectacle ()
{
	
}

template<class Type>
void Spectacle<Type> :: setDirector(string name, string surname, int age)
{
	director = Employee( name, surname, age );
}

template<class Type>
void Spectacle<Type> :: setDrama ( string title, string type, short time )
{
	drama = Drama ( title, type, time ); 
}

template<class Type>
void Spectacle<Type> :: setViewersNumber ( short number )
{
	viewers = number;
}

template<class Type>
void Spectacle<Type> :: addActor ( Employee & actor )
{
	actors.push_back( actor );
}

template<class Type>
void Spectacle<Type> :: addActor ( vector<Employee>& actors )
{
	vector<Employee>::iterator end = this->actors.end();
	//append whole vector
	this->actors.insert( end, actors.begin(), actors.end() );
}

template<class Type>
void Spectacle<Type> :: addViewers ( short people, Type cash )
{
	viewers += people;
	profit += cash;
}

template<class Type>
void Spectacle<Type> :: writeActors () const
{
	for( vector<Employee>::iterator it = actors.begin(); it != actors.end(); ++it )
	{
		cout<<*it;
	}
}




