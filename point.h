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
	void setx(double a);
	void sety(double b);
	double distance (Point& other);
	static double distance (Point& the_point, Point& other);
	void display();
	
	
};
#endif