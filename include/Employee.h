/*
 * @author Tomasz Słojewski
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
	private:
		std::string name;
		std::string surname;
		int age;
	
	public:
		Employee ();
		Employee ( std::string name, std::string surname, int age );
		
		std::string getName () const;
		std::string getSurname () const;
		int getAge () const;
		
		void writeEmployee();

		void operator = (const Employee & otherEmployee);
};

#endif //EMPLOYEE_H
