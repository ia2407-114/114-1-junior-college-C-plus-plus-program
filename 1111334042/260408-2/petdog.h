// PetDog.h
#ifndef PETDOG_H
#define PETDOG_H
#include <string>

class PetDog
{
public:

	PetDog(std::string, int, int, int, int, int, int);


	void printInfo() const;

private:
	std::string name;       
	int bYear, bMonth, bDay;
	int aYear, aMonth, aDay;


	bool isValidDate(int, int, int) const;
	bool isLeapYear(int) const;
};

#endif