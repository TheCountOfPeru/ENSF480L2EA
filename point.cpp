//  point.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "point.h"
#include <iostream>

using namespace std;
//int point::id=1000;
point::point(double a, double b)
{
	x = a;
	y = b;
	//point::incr();
		id++;
}
void point::incr()
{
	id++;
} 
double point::getx()
{
	return x;
}
double point::gety()
{
	return y;
}
int point::counter()
{
	return id;
}
void point::display()
{
	printf("\nX-coordinate: %4.2f\n",getx());
	printf("Y-coordinate: %4.2f", gety());
	printf("\n%d\n",id);
	
}