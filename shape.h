// shape.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef SHAPE_H
#define SHAPE_H

#include 

class Shape{
	
	public:
	Shape(const char *s, double x, double y);
	//ctor
	Shape(const Shape& source);
	~Shape();
	//dtor
	Shape& operator =(const Shape& rhs);
	//overload assignment
	Point* getOrigin();
	char* getName();
	void display();
	double distance(Shape& other);
	static double distance(Shape& the_shape, Shape& other);
	void move(double dx, double dy);
	
	protected:
	Point origin;
	char* shapeName;
	
};
#endif