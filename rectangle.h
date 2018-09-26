// file: rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "square.h"

class Rectangle : public Square
{	
	public:
	Rectangle(const char* s, double x, double y, double a, double b);
	
	Rectangle(const Rectangle& src);
	
	~Rectangle();
	
	Rectangle& operator =(const Rectangle& rhs);
	
	
	void set_sideB(double x);
	double get_sideB();
	double area();
	double perimeter();
	void display();
	
	protected:
	double side_b;

};
#endif