// file: rectangle.cpp

#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(const char* s, double x, double y, double a, double b):Square(s, x, y, a)
{
	set_sideB(b);
}
void Rectangle::set_sideB(double x)
{
	side_b = x;
}
double Rectangle::area()
{
	return side_b * side_a;
}
double Rectangle::perimeter()
{
	return (2*side_b)+(2*side_a);
}
void Rectangle::display()
{
	printf("Rectangle Name: %s\n", Shape::getName());
	Shape::getOrigin().display();
	cout<<"Side a: "<< side_a << endl;
	cout<<"Side b: "<< side_b << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
}
