//shun yin kam
//overload operators to calculate complex number
// Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
class Complex
{
	friend std::ostream& operator<< (std::ostream&, Complex&);//overloading operator
	friend std::istream& operator>>(std::istream&, Complex&);
	friend bool operator==(const Complex &, const Complex &);//==
public:
	explicit Complex(double = 0.0, double = 0.0); // constructor

private:
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex

#endif