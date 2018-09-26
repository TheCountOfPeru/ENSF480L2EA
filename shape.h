// shape.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
	
	public:
	Shape(const char *s, double x, double y);
	//ctor
	Shape(const Shape& source);
	~Shape();
	//dtor
	Shape& operator =(const Shape& rhs);
	//overload assignment
	
	Point& getOrigin();
	char* getName();
	virtual void display();
	double distance(Shape& other);
	static double distance(Shape& the_shape, Shape& other);
	void move(double dx, double dy);
	
	virtual double area() = 0;
	virtual double perimeter() = 0;
	
	
	protected:
	Point origin;
	char* shapeName;
	
};
#endif