// Date.h
#ifndef DATE_H
#define DATE_H

class Date
{
public:

	explicit Date(int = 1990, int = 1, int = 1);


	void setDate(int, int, int);

	void printGregorian() const;
	void printMinguo() const;

private:
	int year;
	int month;
	int day;


	bool isLeapYear(int) const;
	int checkDay(int, int, int) const;
};

#endif#pragma once
