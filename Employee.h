#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
public:
	Employee();
	Employee(const std::string& newSSN);
	std::string getSSN() const;
	void setSSN(const std::string& newSSN);
	void print() const;
	~Employee();

private:

	std::string SSN;
};



#endif
