// file: circle.h
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class Circle:public Shape
{
	public:
	Circle(const char* s, double x, double y, double r);
	virtual double area();
	virtual double perimeter();
	double get_r();
	void set_r(double x);
	virtual void display();
	protected:
	double radius;
};
#endif