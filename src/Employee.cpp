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
/*
Employee :: Employee ()
{
	//do nothing
}
*/
string Employee :: getName () const
{
	return name;
}

string Employee :: getSurname () const
{
	return surname;
}

int Employee :: getAge () const
{
	return age;
}

ostream& operator << (ostream& stream, const Employee& employee )
{
	stream << employee.getName();
	stream << " ";
	stream << employee.getSurname();
	stream << "\n";
	return stream;
}
