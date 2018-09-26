// file: square.h
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square: virtual public Shape{
	
	public:
	
	Square(const char* s, double x, double y, double a);
	
	Square(const Square& src);
	
	~Square();
	
	Square& operator =(const Square& rhs);
	
	virtual double area();
	
	virtual double perimeter();
	
	double get_sideA();
	
	void set_sideA(double a);
	
	virtual void display();
	

	protected:
	
	double side_a;
	
	
};
#endif