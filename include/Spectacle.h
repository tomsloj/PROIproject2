/*
 * @author Tomasz Słojewski
 */

#ifndef SPECTACLE_H
#define SPECTACLE_H

#include <vector>
#include <ctime>

#include "Employee.h"
#include "Drama.h"
#include "Ticket.h"

template <class Type>
class Spectacle
{
	private:
		Employee director;
		Drama drama;
		short numberOfPlaces;
		short soldTickets;
		Ticket *tickets;
		std::vector<Employee>actors;
		Type profit;
		
		void setNumberOfPlaces ( const short & numberOfPlaces );
	
	public:
		Spectacle ();
		Spectacle ( Type numberOfPlaces );
		~Spectacle ();
		
		void setDirector ( const std::string & name,
							const std::string & surname,
							const int & age );
		void setDirector ( const Employee & director );
		void setDrama ( const std::string & title, const short & time );
		void setDrama ( const Drama & drama );
		
		void addActor ( const Employee & actor );
		void addActor ( const std::vector<Employee> & actors );
		void addCosts ( const Type & cost );
		
		bool addTicket ( const Ticket & ticket );
		
		Employee getDirector () const;
		Drama getDrama () const;
		Type getProfit () const;
		void writeActors ();
};

#endif //SPECTACLE_H
