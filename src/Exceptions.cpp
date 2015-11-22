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
double Exceptions::exception2(double value, double number){
		double result;

		if (number == 0)
		        throw std::overflow_error("Divide by zero exception");
		   	    result=value/number;

	return result;

}

