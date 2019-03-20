/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <vector>
#include <iostream>
#include <typeinfo>

#include <Employee.h>
#include <Drama.h>
#include <Spectacle.h>
#include <Ticket.h>

using namespace std;

vector<Employee> getBaseOfEmployees ();
vector<Drama> getBaseOfDrames ();

int main ()
{
	vector<Employee> vectorOfEmployees = getBaseOfEmployees();
	vector<Drama> vectorOfDramas = getBaseOfDrames();
	
	short numberOfPlaces = 20;
	Spectacle<short> spec(numberOfPlaces);

	return 0;
}

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
	vectorOfEmployees.push_back( Employee( "Mariusz", "Benoit", 68 ) );
	vectorOfEmployees.push_back( Employee( "Jacek", "Belar", 36 ) );
	vectorOfEmployees.push_back( Employee( "Katarzyna", "Zielinska", 37 ) );
	vectorOfEmployees.push_back( Employee( "Mateusz", "Rusin", 30 ) );
	vectorOfEmployees.push_back( Employee( "Marcin", "Przybylski", 43 ) );
	vectorOfEmployees.push_back( Employee( "Grzegorz", "Malecki", 43 ) );
	
	vectorOfEmployees.push_back( Employee( "Magda", "Umer", 69 ) );
	vectorOfEmployees.push_back( Employee( "Krzysztof", "Garbaczewski", 36 ) );
	vectorOfEmployees.push_back( Employee( "Jan", "Klata", 46 ) );
	vectorOfEmployees.push_back( Employee( "Grazyna", "Kania", 47 ) );
	vectorOfEmployees.push_back( Employee( "Elimutas", "Nekrosius", 67 ) );

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