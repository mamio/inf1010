#include "point.h"
#include <iostream>

using namespace std;

int  main()
{
	Point P1, P2;
	 
//    P1.incrementer1().incrementer1().incrementer1();
	P1.incrementer1();
	P1.incrementer1();
	P1.incrementer1();
	cout << P1.getX()<< " "<< P1.getY()<< endl;

	P2.incrementer2().incrementer2().incrementer2();
	cout << P2.getX()<< " "<< P2.getY()<< endl;
}