
#include <vector>
#include <iostream>

#include "Functions.hpp"

#include "Drama.hpp"
#include "Employee.hpp"
#include "Ticket.hpp"
#include "Spectacle.hpp"

using namespace std;

vector<Employee> getBaseOfEmployees ()
{
	vector<Employee>vectorOfEmployees;
	
	vectorOfEmployees.push_back( Employee( "Krystyna", "Janda", 66 ) );
	vectorOfEmployees.push_back( Employee( "Janusz", "Bogacki", 70 ) );
	vectorOfEmployees.push_back( Employee( "Tomasz", "Bogacki", 65 ) );
	vectorOfEmployees.push_back( Employee( "Oskar", "Stoczynski", 27 ) );
	vectorOfEmployees.push_back( Employee( "Julia", "Wyszynska", 33 ) );
	vectorOfEmployees.push_back( Employee( "Karolina", "Adamczyk", 43 ) );
	vectorOfEmployees.push_back( Employee( "Ewa", "Szumska", 45 ) );
	vectorOfEmployees.push_back( Employee( "Michal", "Kaleta", 42 ) );
	vectorOfEmployees.push_back( Employee( "Jan", "Peszek", 75 ) );
	
	vectorOfEmployees.push_back( Employee( "Magda", "Umer", 69 ) );
	vectorOfEmployees.push_back( Employee( "Krzysztof", "Garbaczewski", 36 ) );
	vectorOfEmployees.push_back( Employee( "Jan", "Klata", 46 ) );
	
	return vectorOfEmployees;	
}

vector<Drama> getBaseOfDrames ()
{
	vector<Drama>vectorOfDrama;

	vectorOfDrama.push_back( Drama("Zapiski z wygnania", 100) );
	vectorOfDrama.push_back( Drama("Nietota", 75) );
	vectorOfDrama.push_back( Drama("Wielki Fryderyk", 260) );
	vectorOfDrama.push_back( Drama("Romeo i Julia", 135) );
	vectorOfDrama.push_back( Drama("Dziady", 235) );

	return vectorOfDrama;
}

template<class Type1, class Type2, class Type3>
void addSpectaclesData ( Spectacle<Type1> & spectacle1,
						Spectacle<Type2> & spectacle2,
						Spectacle<Type3> & spectacle3 )
{
	vector<Employee> vectorOfEmployees = getBaseOfEmployees();
	vector<Drama> vectorOfDramas = getBaseOfDrames();

	spectacle1.setDrama( vectorOfDramas[0] );
	spectacle1.setDirector( vectorOfEmployees[9] );
	spectacle1.addActor( vectorOfEmployees[0] );
	spectacle1.addActor( vectorOfEmployees[1] );
	spectacle1.addActor( vectorOfEmployees[2] );

	spectacle2.setDrama( vectorOfDramas[1] );
	spectacle2.setDirector( vectorOfEmployees[10] );
	spectacle2.addActor( vectorOfEmployees[3] );
	spectacle2.addActor( vectorOfEmployees[4] );
	spectacle2.addActor( vectorOfEmployees[5] );
	
	spectacle3.setDrama( vectorOfDramas[2] );
	spectacle3.setDirector( vectorOfEmployees[11] );
	spectacle3.addActor( vectorOfEmployees[6] );
	spectacle3.addActor( vectorOfEmployees[7] );
	spectacle3.addActor( vectorOfEmployees[8] );
}

template<class Type1, class Type2, class Type3>
void writeSpectaclesNames ( Spectacle<Type1> & spectacle1,
						Spectacle<Type2> & spectacle2,
						Spectacle<Type3> & spectacle3 )
{
	cout << "1: ";
	cout << spectacle1.getDrama().getTitle() << "\n";
	cout << "2: ";
	cout << spectacle2.getDrama().getTitle() << "\n";
	cout << "3: ";
	cout << spectacle3.getDrama().getTitle() << "\n";
}

//template void writeSpectaclesNames (short, int, long);

int chooseSpectacle()
{
	cout << "choose number of spectacle (1-3) or 0 to close program\n";
	int number;
	cin >> number;
	while( number > 3 || number < 0 )
	{
		cout << "wrong number, choose number again\n";
		cin >> number;
	} 
	return number;
}

template <class Type>
void manageSpectacle( Spectacle<Type> & spectacle )
{
	cout << "your choice: " << spectacle.getDrama().getTitle() << "\n";
	int option = chooseOption();
	switch (option)
	{
		case 1:
			spectacle.writeActors();			
			break;
		case 2:
		{
			string ticketType;
			short ticketPrice;
			cout << "write type of ticket\n";
			cin >> ticketType;
			cout << "write price of ticket\n";
			cin >> ticketPrice;
			if( !spectacle.addTicket( Ticket( ticketType, ticketPrice )))
			{
				cout << "tickets sold out, you cannot add new ticket\n";
			}
			break;
		}
		case 3:
			int cost;
			cout << "write cost to add\n";
			cin >> cost;
			spectacle.addCosts( cost );
			break;
		case 4:
			cout << spectacle.getProfit() << "\n";
			break;
	}
}

int chooseOption()
{
	writeOptions();
	int option;
	cin >> option;
	return option;
}

void writeOptions()
{
	cout << "choose option\n";
	cout << "1: write actors\n";
	cout << "2: add ticket\n";
	cout << "3: add cost of spectacle\n";
	cout << "4: write profit of spectacle\n";
}