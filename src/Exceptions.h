#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <string>
#include <math.h>
#include<vector>


using namespace std;

class Exceptions
{
	private:
	double division(int, int);

	public:
	Exceptions();
	void exception1();
	void exception11(int);
	double exception2(double,double);
	double exception3(double,double);

	short overflow(int);
	void vectorTest();



};
#endif /*EXCEPTIONS_H_*/
