/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (McMillanite): Maximillian Senisch
  IDE: repl.it
  COSC-1436-57002
  Description: This program uses loops with conditions to output the 1st Hello, 2nd Hello, 3rd Hello... Nth Hello, where N is User input
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
  //initialize variables
  int number = 0, incrementingNumber = 1;

  //ask User for input
  cout << "This program outputs the Nth Hello plus all the numbers leading up to it with Hello.\n";
  number = validateInt(number);

  //process - loop with conditions and output
  while(number >= incrementingNumber)
  {
    if(incrementingNumber % 100 > 10 && incrementingNumber % 100 < 14)// includes 11-13 which are the exceptions to the following rules
    {
      cout << incrementingNumber << "th Hello" << endl;
    }
    else if(incrementingNumber % 10 == 1)//any number ending in 1 excluding 11 has st
    {
      cout << incrementingNumber << "st Hello" << endl;
    }
    else if(incrementingNumber % 10 == 2)//any number ending in 2 excluding 12 has nd
    {
      cout << incrementingNumber << "nd Hello" << endl;
    }
    else if(incrementingNumber % 10 == 3)//any number ending in 3 excluding 13 has rd
    {
      cout << incrementingNumber << "rd Hello" << endl;
    }
    else//all other numbers have th
    {
      cout << incrementingNumber << "th Hello" << endl;
    }
    incrementingNumber++;//increment the incrementing number each iteration
  }
  return 0;
}