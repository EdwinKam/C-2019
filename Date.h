//shun yin kam
//overload operators to calculate complex number
// Date.h
// date class definition.
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
class Date
{
	friend std::ostream& operator<< (std::ostream&, Date&);//overloading operator
	friend std::istream& operator>>(std::istream&, Date&);
	friend bool operator==(const Date &, const Date &);//==
public:
	explicit Date(int, double, double); //intialize constructor

private:
	int month;//delcare private data member
	double day;
	double year;
	

};
#endif