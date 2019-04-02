/*
 * @author Tomasz Słojewski
 */

#include <string>
#include <iostream>

#include "Employee.hpp"

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

/*
 * @return name of employee
 */
string Employee :: getName () const
{
	return name;
}

/*
 * @return surname of employee
 */
string Employee :: getSurname () const
{
	return surname;
}

/*
 * @return age of employee
 */
int Employee :: getAge () const
{
	return age;
}

void Employee :: operator = (const Employee & otherEmployee)
{
	name = otherEmployee.name;
	surname = otherEmployee.surname;
	age = otherEmployee.age;
}

/*
 * write name, surname and age of employee
 */
void Employee :: writeEmployee ()
{
	cout << name << " " << surname << ", " << age << " yrs\n";
}