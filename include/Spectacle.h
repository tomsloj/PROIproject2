#ifndef SPECTACLE_H
#define SPECTACLE_H

#include <vector>
#include <ctime>

#include "Employee.h"

using namespace std;

class Spectacle
{
	private:
		Employee director;
		vector<Employee>actors;
		time_t startOfSpectacle;
		
	
	public:
		Spectacle ( );

};




#endif //EPECTACLE_H
