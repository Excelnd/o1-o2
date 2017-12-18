// o1 o2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class A {

};
class B : public A {

};

int main()
{
	A o1;
	B o2;
	o1 = o2;

    return 0;
}

