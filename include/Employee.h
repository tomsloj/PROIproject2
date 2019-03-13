#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <fstream>

using namespace std;

class Employee
{
	private:
		string name;
		string surname;
		int age;
	
	public:
		Employee ( string name = "", string surname = "", int age = 0 );
		string getName () const;
		string getSurname () const;
		int getAge () const;
		
		friend ostream& operator << (ostream & stream, const Employee& employee );
};




#endif //EMPLOYEE_H
