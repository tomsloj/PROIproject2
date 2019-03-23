/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <iostream>

#include "Spectacle.h"
#include "Drama.h"

using namespace std;

template <class Type>
Spectacle<Type> :: Spectacle ()
{
	//do nothing
}

template <class Type>
Spectacle<Type> :: Spectacle ( Type numberOfPlaces )
{
	setNumberOfPlaces( numberOfPlaces );
	tickets = new Ticket [numberOfPlaces];
	soldTickets = 0;
	profit = 0;
}

template <class Type>
Spectacle<Type> :: ~Spectacle ()
{
	delete[] tickets;
}

/*
 * @param name name of director
 * @param surname surname of director
 * @param age age of director
 * set new director
 */
template <class Type>
void Spectacle<Type> :: setDirector(const string & name, const string & surname, const int & age)
{
	director = Employee( name, surname, age );
}

/*
 * @param director new director
 * set director as new director
 */
template <class Type>
void Spectacle<Type> :: setDirector( const Employee & director )
{
	this->director = director;
}

/*
 * @param title title of drama
 * @param type type of drama
 * @param time length of drama
 * set drama as new drama
 */
template <class Type>
void Spectacle<Type> :: setDrama ( const string & title, const short & time )
{
	drama = Drama ( title, time ); 
}

/*
 * @param drama new drama
 * set drama as new drama
 */
template <class Type>
void Spectacle<Type> :: setDrama ( const Drama & drama )
{
	this->drama = drama; 
}

/*
 * @param numberOfPlaces new number of places
 * set numbrerOfPlaces as new number of places
 */
template <class Type>
void Spectacle<Type> :: setNumberOfPlaces ( const short & numberOfPlaces )
{
	this->numberOfPlaces = numberOfPlaces;
}

/*
 * @param actor actor to add
 * add new actor to vector of actors
 */
template <class Type>
void Spectacle<Type> :: addActor ( const Employee & actor )
{
	actors.push_back( actor );
}

/*
 * @param actors vector of actors
 * add whole vector of actors to our vector of actors
 */
template <class Type>
void Spectacle<Type> :: addActor ( const vector<Employee> & actors )
{
	vector<Employee>::iterator end = this->actors.end();
	//append whole vector
	this->actors.insert( end, actors.begin(), actors.end() );
}

/*
 * @param cost new cost of spectacle
 * decrease profit of spectacle
 */
template <class Type>
void Spectacle<Type> :: addCosts ( const Type & cost )
{
	profit -= cost;
}

/*
 * @return false if every ticket is sold, else return true
 * @param ticket new ticket
 * add sold ticket
 */
template <class Type>
bool Spectacle<Type> :: addTicket ( const Ticket & ticket )
{
	if( soldTickets == numberOfPlaces )
	{
		return false;
	}
	tickets [soldTickets] = ticket;
	++soldTickets;
	
	profit += ticket.getPrice();
	return true;
}

/*
 * @return director of spectacle
 * get director of spectacle
 */
template <class Type>
Employee Spectacle<Type> :: getDirector () const
{
	return director;
}

/*
 * @return drama of spectacle
 */
template <class Type>
Drama Spectacle<Type> :: getDrama () const
{
	return drama;
}

/*
 * @return profit of spectacle
 */
template <class Type>
Type Spectacle<Type> :: getProfit () const
{
	return profit;
}

/*
 * write on standard output whole vector of actors
 */
template <class Type>
void Spectacle<Type> :: writeActors ()
{
	vector<Employee>::iterator it;
	for( it = actors.begin(); it != actors.end(); ++it )
	{
		(*it).writeEmployee();
	}
}

template class Spectacle<short>;
template class Spectacle<int>;
template class Spectacle<long>;
