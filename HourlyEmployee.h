#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"

class HourlyEmployee : public Employee
{
private: 
	double hourlyRate;

public:
	HourlyEmployee();
	HourlyEmployee(const std::string& newSSN, double newRate);
	void setRate(double newRate);
	double getRate() const;
	void print() const;
	~HourlyEmployee();
};
#endif
