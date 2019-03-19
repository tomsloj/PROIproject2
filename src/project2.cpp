/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <vector>
#include <iostream>

#include <Employee.h>
#include <Drama.h>
#include <Spectacle.h>

using namespace std;

vector<Employee> getBaseOfEmployees ();

int main ()
{
	//Employee tmp ("Jan", "Kowalski", 21);
	//cout << tmp << "\n";
	return 0;
}

vector<Employee> getBaseOfEmployees ()
{
	vector<Employee>vectorOfEmployees;
	
	vectorOfEmployees.push_back( Employee( "Cezary", "Pazura", 50 ) );
	vectorOfEmployees.push_back( Employee( "Angelina", "Jolie", 44 ) );
	vectorOfEmployees.push_back( Employee( "Leonardo", "DiCaprio", 44 ) );
	vectorOfEmployees.push_back( Employee( "Alan", "Rickman", 69 ) );
	vectorOfEmployees.push_back( Employee( "Clint", "Eastwood", 88 ) );
	vectorOfEmployees.push_back( Employee( "Hugh", "Laurie", 59 ) );
	vectorOfEmployees.push_back( Employee( "Tom", "Hanks", 62 ) );
	vectorOfEmployees.push_back( Employee( "Joe", "Pesci", 76 ) );
	vectorOfEmployees.push_back( Employee( "Edward", "Norton", 49 ) );
	vectorOfEmployees.push_back( Employee( "Johny", "Depp", 55 ) );
	
	vectorOfEmployees.push_back( Employee( "Quentin", "Tarantino", 55 ) );
	vectorOfEmployees.push_back( Employee( "Sergio", "Leone", 60 ) );
	vectorOfEmployees.push_back( Employee( "David", "Fincher", 56 ) );
	vectorOfEmployees.push_back( Employee( "Frank", "Darabont", 60 ) );

	return vectorOfEmployees;	
}
