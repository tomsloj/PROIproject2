/*
 * @author Tomasz Słojewski
 */

#include <string>

#include "Employee.h"

using namespace std;

Employee :: Employee ( string name, string surname, int age )
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

Employee :: Employee ()
{
	//do nothing
}

string Employee :: getName ()
{
	return name;
}

string Employee :: getSurname ()
{
	return surname;
}

int Employee :: getAge ()
{
	return age;
}
