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

template <class Type1, class Type2, class Type3>
void writeSpectaclesNames ( Spectacle<Type1> & spectacle1, Spectacle<Type2> & spectacle2, Spectacle<Type3> & spectacle3 );

int chooseSpectacle ();

template <class Type>
void doSomething( Spectacle<Type> & spectacle );

int chooseOption();
void writeOptions ();


int main ()
{
	vector<Employee> vectorOfEmployees = getBaseOfEmployees();
	vector<Drama> vectorOfDramas = getBaseOfDrames();
	
	short numberOfPlaces1 = 32;
	Spectacle<short> spectacle1( numberOfPlaces1 );
	spectacle1.setDrama( vectorOfDramas[0] );
	spectacle1.setDirector( vectorOfEmployees[15] );
	spectacle1.addActor( vectorOfEmployees[0] );
	spectacle1.addActor( vectorOfEmployees[1] );
	spectacle1.addActor( vectorOfEmployees[2] );

	int numberOfPlaces2 = 1024;
	Spectacle<int> spectacle2( numberOfPlaces2 );
	spectacle2.setDrama( vectorOfDramas[1] );
	spectacle2.setDirector( vectorOfEmployees[16] );
	spectacle2.addActor( vectorOfEmployees[3] );
	spectacle2.addActor( vectorOfEmployees[4] );
	spectacle2.addActor( vectorOfEmployees[5] );
	
	long numberOfPlaces3 = 32768;
	Spectacle<long> spectacle3( numberOfPlaces3 );
	spectacle3.setDrama( vectorOfDramas[2] );
	spectacle3.setDirector( vectorOfEmployees[17] );
	spectacle3.addActor( vectorOfEmployees[6] );
	spectacle3.addActor( vectorOfEmployees[7] );
	spectacle3.addActor( vectorOfEmployees[8] );
	int choice = chooseSpectacle();

	while( choice != 0 )
	{
		writeSpectaclesNames(spectacle1, spectacle2, spectacle3);
		switch(choice)
		{
			case 1:
				doSomething(spectacle1);
				break;
			case 2:
				doSomething(spectacle2);
				break;
			case 3:
				doSomething(spectacle3);
				break;
		}

		choice = chooseSpectacle();
	}
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

template<class Type1, class Type2, class Type3>
void writeSpectaclesNames ( Spectacle<Type1> & spectacle1, Spectacle<Type2> & spectacle2, Spectacle<Type3> & spectacle3 )
{
	cout << "1: ";
	cout << spectacle1.getDrama().getTitle() << "\n";
	cout << "2: ";
	cout << spectacle2.getDrama().getTitle() << "\n";
	cout << "3: ";
	cout << spectacle3.getDrama().getTitle() << "\n";
}

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
void doSomething( Spectacle<Type> & spectacle )
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
			spectacle.addTicket( Ticket( ticketType, ticketPrice ));
			break;
		}
		case 3:
			int cost;
			cout << "write cost to add\n";
			cin >> cost;
			spectacle.addCosts( cost );
			break;
		case 4:
			cout << spectacle.getProfit();
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

