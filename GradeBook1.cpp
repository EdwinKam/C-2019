//Shun Yin Kam
// GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name , string iname)
   : courseName( name ), instructorName ( iname ) // member initializer to initialize courseName 
{                                                                      
	cout << "*Create a Gradebook Object*\n\n";
} // header constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
   return courseName; // return object's courseName
} // end function getCourseName
void GradeBook::setInstructorName( string iname )
{
   instructorName = iname; // store the InstructorName in the object
} // end function setInstructorName

// function to get the InstructorName
string GradeBook::getInstructorName() const
{
   return instructorName; // return object's InstructorName
} // end function getInstructorName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
   // call getCourseName to get the courseName
   cout << "Welcome to the grade book for\n" << getCourseName() 
      << "!" << endl;
      cout << "This course is presented by: " << getInstructorName()<< endl;
} // end function displayMessage


