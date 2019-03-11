#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
	private:
		string name;
		string surname;
		int age;
	
	public:
		Employee ( string name, string surname, int age );
		Employee ();
		string getName ();
		string getSurname ();
		int getAge ();

};




#endif //EMPLOYEE_H
