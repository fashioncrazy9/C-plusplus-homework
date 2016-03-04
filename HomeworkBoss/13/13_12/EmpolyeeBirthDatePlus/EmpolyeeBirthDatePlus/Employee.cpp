// Fig. 13.14: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee( const string &first, const string &last,
   const string &ssn )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
   // empty body 
} // end Employee constructor

// set first name
void Employee::setFirstName( const string &first ) 
{ 
   firstName = first;  
} // end function setFirstName

// return first name
string Employee::getFirstName() const 
{ 
   return firstName;  
} // end function getFirstName

// set last name
void Employee::setLastName( const string &last )
{
   lastName = last;   
} // end function setLastName

// return last name
string Employee::getLastName() const
{
   return lastName;   
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;   
} // end function getSocialSecurityNumber

// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{ 
	cout << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber() << "\n" << "birthDate: "<< getbirthDate();
} // end function print
void Employee::setbirthDate(int m, int d, int y){
	birthDate.setDate(m, d, y);
}
Date  Employee::getbirthDate()const{
	return birthDate;
}
int Employee::getMonth(){
	return birthDate.getMouth();
}
void Employee::AddEarning(double e){
	addEarning += e;
}
int Employee::getAddEarning()const{
	return addEarning;
}
/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
