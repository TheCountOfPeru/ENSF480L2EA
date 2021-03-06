// file: circle.h
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle: virtual public Shape
{
	public:
	
	Circle(const char* s, double x, double y, double r);
	
	Circle(const Circle& src);
	
	~Circle();
	
	Circle& operator =(const Circle& rhs);
	
	virtual double area();
	
	virtual double perimeter();
	
	double get_r();
	
	void set_r(double x);
	
	virtual void display();
	
	
	protected:
	
	double radius;
};
#endif