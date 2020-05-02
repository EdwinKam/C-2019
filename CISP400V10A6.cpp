//shun yin kam
//a6
//cisp400
//Write a simple function template for predicate function 
//isEqualTo that compares its two arguments of the same type with the equality 
//operator (==) and returns true if they are equal and false if they are not equal. 
//Use this function template in a program that calls isEqualTo on a variety of built-in 
//types and user define types, Complex and Date (need to overload the equality 
//operator (operator==) and extraction operator (operator<<)).  
//Write a program with variety of inputs to test the functionalities of the program.
#include<iostream>
#include<string>
#include "Complex.h"
#include "Date.h"
using namespace std;
template<class type>
bool isEqualTo(type T1, type T2)
{
	return (T1 == T2);//return true if they are euqal
}




int main()
{
	//*** Integers Tests *** 
	cout << "*** Integers Tests *** " << endl;
	cout << "Integers: 1 and 1 are " << (isEqualTo(1, 1) ? "" : "NOT") << " equal " << endl;//disply result with the function toEqualto
	cout << "Integers: 2 and 4 are " << (isEqualTo(2, 4) ? "" : "NOT") << " equal " << endl;
	cout << "Integers: -1 and 1 are " << (isEqualTo(-1, 1) ? "" : "NOT") << " equal " << endl;
	cout << "Integers: -1 and -1 are " << (isEqualTo(-1, -1) ? "" : "NOT") << " equal " << endl;
	cout << endl;
	//*** Chars Tests ***
	cout << " *** Chars Tests *** " << endl;
	cout << "Characters: a and a are " << (isEqualTo('a', 'a') ? "" : "\"NOT\"") << " equal " << endl;
	cout << "Characters: a and c are " << (isEqualTo('a', 'c') ? "" : "\"NOT\"") << " equal " << endl;
	cout << "Characters: c and a are " << (isEqualTo('c', 'a') ? "" : "\"NOT\"") << " equal " << endl;
	cout << "Characters: c and c are " << (isEqualTo('c', 'c') ? "" : "\"NOT\"") << " equal  " << endl;
	cout << endl;
	//*** Double Tests ***
	cout << " *** Double Tests *** " << endl;
	cout << "Doubles: 2.2 and 2.2 are " << (isEqualTo(2.2, 2.2) ? "" : "\"NOT\"") << " equal: " << endl;
	cout << "Doubles: 2.2 and 2.3 are " << (isEqualTo(2.2, 2.3) ? "" : "\"NOT\"") << " equal  " << endl;
	cout << "Doubles: -2.2 and 2.2 are " << (isEqualTo(-2.2, 2.2) ? "" : "\"NOT\"") << " equal " << endl;
	cout << "Doubles: -2.2 and -2.2 are " << (isEqualTo(-2.2, -2.2) ? "" : "\"NOT\"") << " equal " << endl;
	cout << endl;
	//"*** Complex Tests ***
	cout << "*** Complex Tests *** " << endl;
	Complex C1(10, 5);//enter complex number
	Complex C2(10, 5);
	cout << "Class objects: " << C1 << " and " << C2 << " are " << (isEqualTo(C1, C2) ? "" : "NOT") << " equal " << endl;
	Complex C3(10, 5);
	Complex C4(10, 54);
	cout << "Class objects: " << C3 << " and " << C4 << " are " << (isEqualTo(C3, C4) ? "" : "NOT") << " equal " << endl;
	Complex C5(10, -5);
	Complex C6(10, 5);
	cout << "Class objects: " << C5 << " and " << C6 << " are " << (isEqualTo(C5, C6) ? "" : "NOT") << " equal " << endl;
	Complex C7(-10, -5);
	Complex C8(-10, -5);
	cout << "Class objects: " << C7 << " and " << C8 << " are " << (isEqualTo(C7, C8) ? "" : "NOT") << " equal " << endl;
	cout << endl;
	//*** string Tests ***
	cout << "*** string Tests *** " << endl;
	cout << "String objects: abcdefg and abcdefg are " << (isEqualTo("abcdefg", "abcdefg") ? "" : "\"NOT\"") << " equal " << endl;
	cout << "String objects: abcdefg and abcdefh are " << (isEqualTo("abcdefg", "abcdefh") ? "" : "\"NOT\"") << "equal " << endl;
	cout << "String objects: -abcdefg and abcdefg are " << (isEqualTo("-abcdefg", "abcdefg") ? "" : "\"NOT\"") << " equal " << endl;
	cout << "String objects: -abcdefg and -abcdefg are " << (isEqualTo("-abcdefg", "-abcdefg") ? "" : "\"NOT\"") << " equal " << endl;
	cout << endl;
	//"*** Date Tests ***
	cout << "*** Date Tests *** " << endl;
	Date D1(2, 31, 2017);//enter the date
	Date D2(2, 31, 2017);
	cout << "Date objects: " << D1 << " and " << D2 << " are " << (isEqualTo(D1, D2) ? "" : "\"NOT\"") << " equal " << endl;
	Date D3(2, 13, 2017);
	Date D4(2, 14, 2017);
	cout << "Date objects: " << D3 << " and " << D4 << " are " << (isEqualTo(D3, D4) ? "" : "\"NOT\"") << " equal " << endl;
	Date D5(-2, 13, 2017);
	Date D6(2, 13, 2017);
	cout << "Date objects: " << D5 << " and " << D6 << " are " << (isEqualTo(D5, D6) ? "" : "\"NOT\"") << " equal " << endl;
	Date D7(-2, 13, 2017);
	Date D8(-2, 13, 2017);
	cout << "Date objects: " << D7 << " and " << D8 << " are " << (isEqualTo(D7, D8) ? "" : "\"NOT\"") << " equal " << endl;
	system("pause");
	return 0;
}