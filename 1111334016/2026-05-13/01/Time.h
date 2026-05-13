#pragma once

// Fig. 10.6: Time.h
// Time class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Time
{
	friend std::ostream& operator<<(std::ostream&, const Time&);
public:
	Time(int h = 0, int m = 0, int s = 0); // default constructor
	void setTime(int, int, int); // set month, day, year
	Time& operator++(); // prefix increment operator
	Time operator++(int); // postfix increment operator
	Time& operator+=(unsigned int); // add days, modify object
	

private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;

	
	void helpIncrement(); // utility function for incrementing date
}; // end class Time

#endif


