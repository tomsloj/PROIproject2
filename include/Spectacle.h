#ifndef SPECTACLE_H
#define SPECTACLE_H

#include <vector>
#include <ctime>

#include "Employee.h"
#include "Drama.h"

using namespace std;



//template <typename T>
class Spectacle
{
	private:
		Employee director;
		Drama drama;
		vector<Employee>actors;
		time_t startOfSpectacle;
		short viewers;
		int salary;
	
	public:
		Spectacle ();
		void setDirector ( string name, string surname, int age );
		void setDrama ( string title, string type, short time );
		void setViewersNumber( short number );
		void addActor ( Employee & actor );
		void addActor ( vector<Employee>& actors );
		void addViewers ( short people, int cash );
};




#endif //EPECTACLE_H
