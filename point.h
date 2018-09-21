// point.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef POINT_H
#define POINT_H
class point{
	private:
	double x,y;
	
	
	public:
	int id=1000;
	point(double a, double b);
	//Default ctor
	void incr();
	double getx();
	double gety();
	setx(double a);
	sety(double b);
	int counter();
	void display();
	
	
};
#endif