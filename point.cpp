//  point.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "point.h"
#include <iostream>
#include <stdio.h>

using namespace std;


int Point::id=1000;


Point::Point(double a, double b)
{
	x = a;
	y = b;
	id++;
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
	return id;
}
void Point::display()
{
	printf("\nX-coordinate: %4.2f\n", x);
	printf("Y-coordinate: %4.2f", y);
	printf("\n%d\n",id);
	
}