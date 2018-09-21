// point.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef POINT_H
#define POINT_H

class Point{
	private:
	double x,y;
	unsigned int id;
	
	
	public:
	static int objCount;
	static int counter();
	
	Point(double a, double b);
	//Default ctor
	
	double getX();
	double getY();
	setx(double a);
	sety(double b);
	
	void display();
	
	
};
#endif