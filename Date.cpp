//shun yin kam
//overload operators to calculate complex number
// Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include <iomanip>
#include "Date.h" // Complex class definition
using namespace std;
// Constructor
Date::Date(int mn, double dy, double yr)
	: month(mn),
	day(dy),
	year(yr)
{
	// empty body
} // end Complex constructor


	istream &operator>>(istream &input, Date &D)//overload operator >>
	{
		input >> D.month >> D.day >> D.year;//input as (month, day, year)
		return input;
	}
	ostream &operator<<(ostream &output, Date &D)
	{
		string months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };//set name of the month
		if (D.month <= 0 || D.month > 12) {//validation to prevent negative numbers
			D.month = 1;// set numbers to 1
		}
		else {
			D.month = D.month;//stays the same
		}
		output << months[D.month-1] << " " << D.day << "," << " " << D.year;//display as month day year
		return output;
	}
	bool operator==(const Date& D1, const Date& D2)//overload operator ==
	{

		return ((D1.month == D2.month) && (D1.day == D2.day) && (D1.year == D2.year));//equal if month day year all euqal

	}

