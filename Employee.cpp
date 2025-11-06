#include "Employee.h"
#include <string>
#include <iostream>

Employee::Employee()
{
	SSN = "000-00-0000";
}
Employee::Employee(const std::string& newSSN)
{
	SSN = newSSN;
}
std::string Employee::getSSN() const
{
	return SSN;
}
void Employee::setSSN(const std::string& newSSN)
{
	SSN = newSSN;
}
void Employee::print() const
{
	std::cout << "Using accessor function..." << std::endl;
	std::cout << "SSN: " << getSSN() << std::endl << std::endl;
	std::cout << "Using parent class function..." << std::endl;
} 
