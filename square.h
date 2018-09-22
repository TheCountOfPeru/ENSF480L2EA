// file: square.h
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square: public Shape{
	
	public:
	Square(const char* s, double x, double y, double a);
	
	virtual double area();
	
	virtual double perimeter();
	
	double get_sideA();
	
	void set_sideA(double a);
	
	virtual void display();
	

	protected:
	double side_a;
	
	private:
	
};
#endif