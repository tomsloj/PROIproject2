#ifndef SPECTACLE_H
#define SPECTACLE_H

#include <vector>
#include <ctime>

#include "Employee.h"
#include "Drama.h"



template <typename Type>
class Spectacle
{
	private:
		Employee director;
		Drama drama;
		std::vector<Employee>actors;
		//time_t startOfSpectacle;
		short viewers;
		Type profit;
	
	public:
		Spectacle ();
		void setDirector ( std::string name, std::string surname, int age );
		void setDrama ( std::string title, std::string type, short time );
		void setViewersNumber( short number );
		
		void addActor ( Employee & actor );
		void addActor ( std::vector<Employee>& actors );
		void addViewers ( short people, Type cash );
		
		void writeActors () const;
};




#endif //EPECTACLE_H
