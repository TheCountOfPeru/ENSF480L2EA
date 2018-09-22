//  point.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "point.h"
#include <iostream>
#include <stdio.h>

using namespace std;


int Point::objCount = 0;


Point::Point(double a, double b)
{
	objCount++;
	
	x = a;
	y = b;
	id = objCount + 1000;
}

double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
int Point::counter()
{
	return objCount;
}
void Point::display()
{
	printf("\nX-coordinate: %4.2f\n", x);
	printf("Y-coordinate: %4.2f", y);	
}