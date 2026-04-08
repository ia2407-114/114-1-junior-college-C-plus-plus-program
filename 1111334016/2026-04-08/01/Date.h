#pragma once
// prevent multiple inclusions of header 
#ifndef DATE_H//怕和資料庫有同名但不同的資料
#define DATE_H//自己定義

// Date class definition
class Date
{
public:
	explicit Date(int = 1900, int = 1, int = 1); // 初始值才不會亂碼
	// set functions
	void setDate(int, int, int); // set year, month, day
	void setYear(int); // set year (after validation)
	void setMonth(int); // set month (after validation)
	void setDay(int); // set day (after validation)

	// get functions
	unsigned int getYear() const; // return year
	unsigned int getMonth() const; // return month
	unsigned int getDay() const; // return day

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int year; // 1 - 9999 
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Date

#endif

