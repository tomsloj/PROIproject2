/*
 * @author Tomasz Słojewski
 */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <vector>

#include "Drama.hpp"
#include "Employee.hpp"
#include "Ticket.hpp"
#include "Spectacle.hpp"

std::vector<Employee> getBaseOfEmployees ();
std::vector<Drama> getBaseOfDrames ();

template <class Type1, class Type2, class Type3>
void addSpectaclesData ( Spectacle<Type1> & spectacle1,
						Spectacle<Type2> & spectacle2,
						Spectacle<Type3> & spectacle3 );


template <class Type1, class Type2, class Type3>
void writeSpectaclesNames ( Spectacle<Type1> & spectacle1,
						Spectacle<Type2> & spectacle2,
						Spectacle<Type3> & spectacle3 );

int chooseSpectacle ();

template <class Type>
void manageSpectacle( Spectacle<Type> & spectacle );

int chooseOption();
void writeOptions ();

#include "Functions.ipp"

#endif //FUNCTIONS_HPP
