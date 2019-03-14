#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <fstream>

class Employee
{
	private:
		std::string name;
		std::string surname;
		int age;
	
	public:
		Employee ( string name = "", string surname = "", int age = 0 );
		std::string getName () const;
		std::string getSurname () const;
		int getAge () const;
		
		friend ostream& operator << (ostream & stream, const Employee& employee );
		
};




#endif //EMPLOYEE_H
