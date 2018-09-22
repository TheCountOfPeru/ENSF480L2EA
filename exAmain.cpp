// exAmain.cpp
// ENSF 480 Lab 2 -  FALL 2018 - Exercise A
// Author - Jonathan Yee

#include <iostream>
#include <math.h>
#include "point.h"
#include "shape.h"
#include "square.h"
#include "rectangle.h"
//#include "rectangle.h"
using namespace std;

int main()
{
	#if 0
	Point a(0,0);
	Point b(0,0);
	a.display();
	b.display();
	Shape aa("first", 0, 0);
	Shape bb("second", 3,4);
	aa.display();
	bb.display();
	cout<<Point::counter()<<endl;
	cout<<a.distance(b)<<endl;
	cout<<Shape::distance(a,b)<<endl;
	#endif
	#if 0
	Square aaa("square1",0,0,1);
	aaa.display();
	#endif
	#if 1
	Rectangle ab("Rectangle1", 0, 0, 1, 2);
	ab.display();
	#endif 
	return 0;
	
}