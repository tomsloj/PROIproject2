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
		Employee ();
		Employee ( std::string name, std::string surname, int age );
		std::string getName () const;
		std::string getSurname () const;
		int getAge () const;
		
		void operator = (const Employee & otherEmployee);
		
		//friend std::ostream& operator << ( std::ostream & stream, const Employee& employee );
		
};




#endif //EMPLOYEE_H
