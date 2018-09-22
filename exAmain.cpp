// exAmain.cpp
// ENSF 480 Lab 2 -  FALL 2018 - Exercise A
// Author - Jonathan Yee

#include <iostream>
#include <math.h>
#include "point.h"
#include "shape.h"
using namespace std;

int main()
{
	Point aa(0,0);
	Point bb(0,0);
	aa.display();
	bb.display();
	Shape a("first", 0, 0);
	Shape b("second", 3,4);
	a.display();
	b.display();
	cout<<Point::counter()<<endl;
	cout<<a.distance(b)<<endl;
	cout<<Shape::distance(a,b)<<endl;
	return 0;
	
}