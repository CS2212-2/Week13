//============================================================================
// Name        : Week13.cpp
// Author      : Izzat Alsmadi
// Version     :
// Copyright   : Your copyright notice
// Description : Exceptions
//============================================================================

#include <iostream>
#include<string>

#include "Exceptions.h"
using namespace std;

int main() {
	Exceptions ex1;
	//ex1.exception1();


	//int main, divide;
	//cout<<"Enter the Number :";
		//cin>>main;

		//ex1.exception11(main);
		//try an invalid int (e.g. a letter)
		double result=0.0;
		// cout<<"Enter the Number :";
		//	    cin>>main;
	  //   cout<<"Enter the Number to divide :";
			//   cin>>divide;
	//result= ex1.exception2(main,divide);

	//	     result=ex1.exception3(main,divide);

		     // test overflow
			int main1;
		     short result1=0.0;
		 //    		 cout<<"Enter the Number :";
		   //  			    cin>>main1;
		     //	result1= ex1.overflow(main1);
		     	//cout<<"result is " << result1<< endl;

		 //    	ex1.vectorTest();

		 string test ="This is a test";
		 string test1="Department of computer science, University of New Haven";
		 string output;
		// output=ex1.generalExceptions(test, "ab", 1,2);
		 //output=ex1.generalExceptions(test1, "aaaaa", 1,2); // normal output

		 output=ex1.generalExceptions(test, "aaaaa", 25,2); // out of range exception

		 cout << "output is.." << output << "..." << endl;

	     return 0;
	 }


