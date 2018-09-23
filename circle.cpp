// file: circle.cpp
#include <iostream>
#include "circle.h"
#include <math.h>

using namespace std;

Circle::Circle(const char* s, double x, double y, double r):Shape(s,x,y)
{
	set_r(r);
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
	printf("Circle Name: %s\n", Shape::getName());
	Shape::getOrigin().display();
	printf("Radius: %4.2f\n", get_r());
	printf("Area: %4.2f\n", area());
	printf("Perimeter: %4.2f\n", perimeter());
	
}
