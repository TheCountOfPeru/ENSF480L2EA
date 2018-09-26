//  point.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "point.h"
#include <math.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;


int Point::objCount = 0;


Point::Point(double a, double b)
{
	//printf("Call to Point ctor\n");
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
void Point::setx(double a)
{
	x=a;
}
void Point::sety(double b)
{
	y=b;
}
int Point::counter()
{
	return objCount;
}
double Point::distance (Point& other)
{

	double square_difference_x = (other.getX() - Point::x) * (other.getX() - getX());
    double square_difference_y = (other.getY() - getY()) * (other.getY() - getY());
    double sum = square_difference_x + square_difference_y;
    double value = sqrt(sum);
    return value;

}
/*
	Call this with Point::distance(a,b);
*/
double Point::distance (Point& the_point, Point& other)
{

	double square_difference_x = (other.getX() - the_point.getX()) * (other.getX() - the_point.getX());
    double square_difference_y = (other.getY() - the_point.getY()) * (other.getY() - the_point.getY());
    double sum = square_difference_x + square_difference_y;
    double value = sqrt(sum);
    return value;

}
void Point::display()
{
	cout<< fixed << setprecision(2);
	cout<<"X-coordinate: "<< x << endl;
	cout<<"Y-coordinate: "<< y << endl;	
}