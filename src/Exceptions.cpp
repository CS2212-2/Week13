/*
/ * Recursion.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: Izzat Alsmadi
 */
#include "Exceptions.h"

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdexcept>
#include<string>
#include <typeinfo>

using namespace std;

using namespace std;

Exceptions::Exceptions(){}
void Exceptions::exception1(){
	try
	  {
	    throw 5;
	  }
	  catch (int e)
	  {
	    cout << "An exception occurred. Exception Nr. " << e << '\n';
	  }
}

void Exceptions::exception11(int element){
	//int* elem;
    if (element == NULL)
        throw std::bad_alloc();
}
double Exceptions::exception2(double value, double number){
		double result;

		if (number == 0)
		        throw std::overflow_error("Divide by zero exception");
		   	    result=value/number;

	return result;

}
double Exceptions::division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}
double Exceptions::exception3(double value, double number){
	double result;
	try {
		result = Exceptions::division(value, number);
	     cout << result << endl;
	   }catch (const char* msg) {
	     cerr << msg << endl;
	   }
}

short Exceptions::overflow(int n){
	short result;
	try{
		result=n*n*n*n*n*n*n;
	}
	 catch(exception &err)

	{

	cerr<<"Caught "<<err.what()<<endl;

	cerr<<"Type "<<typeid(err).name()<<endl;

	}
	 return result;
}

void Exceptions::vectorTest(){
	vector<int> arr;

	//push two elements into vector
	arr.push_back(4);
	arr.push_back(7);

	//try to access the third element that does not exist
	try
	{
		arr.at(2);
	}

	catch (exception &err)//catch all exceptions
	{
		cout << "Exception happened" << endl;// user defined
		cerr<<"Caught "<<err.what()<<endl; // built in

			cerr<<"Type "<<typeid(err).name()<<endl; // built in
	}

	try {
		    arr.at(20)=100;      // vector::at throws an out-of-range
		  }
		  catch (const std::out_of_range& oor) {
		    std::cerr << "Out of Range error: " << oor.what() << '\n';
		  }
}

string Exceptions::generalExceptions(string input, string newString, int position, int length){
	 string newInput;
	try {

      //  string newString="abc";

        newInput=input.replace (position, length, newString);
	    }
	    catch (std::out_of_range &e) {

	        // Print out the exception string, which in this implementation
	        // includes the location and the name of the function that threw
	        // the exception along with the reason for the exception.
	        std::cout << "Caught an out_of_range exception: "
	                  << e.what () << '\n';
	    }
	    catch (std::runtime_error &e) {
	     std::cout << "Caught a runtime_error exception: "
	      << e.what () << '\n';
	    	    }
	    catch (std::range_error &e) {
	      std::cout << "Caught a range_error exception: "
	       << e.what () << '\n';
	    	    	    }
	    catch (std::domain_error &e) {
	   	  std::cout << "Caught a domain_error exception: "
	   	    << e.what () << '\n';
	   	    	    	    }
	    catch (std::logic_error &e) {
	       std::cout << "Caught a logic_error exception: "
	       << e.what () << '\n';
	       	    	    	    }
	    catch (std::overflow_error &e) {
	   	  std::cout << "Caught an overflow error exception: "
	   	    << e.what () << '\n';
	   	  	   	    	    	    }
	    catch (std::underflow_error &e) {
	   	    std::cout << "Caught an under flow error exception: "
	   	    << e.what () << '\n';
	   	    	   	    	    	    }
	    catch (std::length_error &e) {
	   	std::cout << "Caught a length_error exception: "
	   	  << e.what () << '\n';
	   	    	   	    	    	    }
	    catch (std::bad_cast &e) {
	       std::cout << "Caught a bad cast exception: "
	       << e.what () << '\n';
	    	   	    	   	    	    	    }
	    catch (std::bad_typeid &e) {
	        std::cout << "Caught a bad type id exception: "
	       << e.what () << '\n';
	    	    	   	    	   	    	    	    }
	    catch (std::bad_alloc &e) {
	      std::cout << "Caught a bad alloc exception: "
	    		  << e.what () << '\n';
	      	    	   	    	    	    }
	    catch (std::invalid_argument &e) {
	   	   std::cout << "Caught an invalid argument exception: "
	   	    << e.what () << '\n';
	   	    	   	    	    	    }
	    catch (std::bad_exception &e) {

	      std::cout << "Caught an exception of a bad exception type: "
	        << e.what () << '\n';
	    	    }
	    catch (std::exception &e) {
	        std::cout << "Caught an exception of an unexpected type: "
                 << e.what () << '\n';
	    }
	    catch (...) {
	        std::cout << "Caught an unknown exception\n";
	    }



	    return newInput;
}
