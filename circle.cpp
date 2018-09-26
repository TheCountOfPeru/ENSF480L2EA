// file: circle.cpp
#include <iostream>
#include "circle.h"
#include <math.h>

using namespace std;

Circle::Circle(const char* s, double x, double y, double r):Shape(s,x,y)
{
	set_r(r);
}

Circle::Circle(const Circle& src): Shape(src){
	radius = src.radius;
}
	
Circle::~Circle(){}
	
Circle& Circle::operator =(const Circle& rhs){
	
	Shape::operator = (rhs);
	radius = rhs.radius;
	
	return *this;
}

double Circle::area()
{
	return M_PI*pow(get_r(), 2);
}

double Circle::perimeter()
{
	return 2*M_PI*get_r();
}

double Circle::get_r()
{
	return radius;
}

void Circle::set_r(double x)
{
	radius = x;
}

void Circle::display()
{
	cout<<"Circle Name: "<< getName() << endl;
	getOrigin().display();
	cout<<"Radius: "<< radius << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
	
}
