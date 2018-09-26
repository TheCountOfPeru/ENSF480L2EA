// file: rectangle.cpp

#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(const char* s, double x, double y, double a, double b):Square(s, x, y, a), Shape(s, x, y)
{
	set_sideB(b);
}

Rectangle::Rectangle(const Rectangle& src): Shape(src), Square(src){
	side_b = src.side_b;
}
	
Rectangle::~Rectangle(){}
	
Rectangle& Rectangle::operator =(const Rectangle& rhs){
	Shape::operator = (rhs);
	Square::operator = (rhs);
	side_b = rhs.side_b;
	
	return *this;
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
	cout<<"Rectangle Name: "<< getName() << endl;
	getOrigin().display();
	cout<<"Side A: "<< side_a << endl;
	cout<<"Side B: "<< side_b << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
}
