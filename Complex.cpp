//shun yin kam
//overload operators to calculate complex number
// Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include <iomanip>
#include "Complex.h" // Complex class definition
using namespace std;
// Constructor
Complex::Complex(double realPart, double imaginaryPart)
	: real(realPart),
	imaginary(imaginaryPart)
{
	// empty body
} // end Complex constructor

	istream &operator>>(istream &input, Complex &C)//overload >>
	{
		input >> C.real >> C.imaginary;//input form
		return input;
	}
	ostream &operator<<(ostream &output, Complex &C)//overload <<
	{
		output << C.real << "+" << C.imaginary << "i";//output form
		return output;
	}
	bool operator==(const Complex& operand1, const Complex& operand2)
	{

		return (operand1.real == operand2.imaginary &&
			operand1.imaginary == operand2.imaginary);;

	}

