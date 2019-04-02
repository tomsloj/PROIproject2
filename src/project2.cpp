/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <vector>
#include <iostream>

#include "Employee.hpp"
#include "Drama.hpp"
#include "Spectacle.hpp"
#include "Ticket.hpp"

#include "Functions.hpp"

using namespace std;

int main ()
{	
	short numberOfPlaces1 = 32;
	Spectacle<short> spectacle1( numberOfPlaces1 );

	int numberOfPlaces2 = 1024;
	Spectacle<int> spectacle2( numberOfPlaces2 );
	
	long numberOfPlaces3 = 32768;
	Spectacle<long> spectacle3( numberOfPlaces3 );
	
	addSpectaclesData( spectacle1, spectacle2, spectacle3 );
	writeSpectaclesNames( spectacle1, spectacle2, spectacle3 );
	int choice = chooseSpectacle();
	
	while( choice != 0 )
	{	
		switch(choice)
		{
			case 1:
				manageSpectacle( spectacle1 );
				break;
			case 2:
				manageSpectacle( spectacle2 );
				break;
			case 3:
				manageSpectacle( spectacle3 );
				break;
		}
		writeSpectaclesNames(spectacle1, spectacle2, spectacle3);
		choice = chooseSpectacle();
	}
	return 0;
}

