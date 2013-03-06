#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point
{
	public:
		Point( double x=0, double y=0);
		double getX() const; 
		double getY() const;
		void incrementer1();
		Point& incrementer2( );
	private:
		double x_,y_;

};


#endif

