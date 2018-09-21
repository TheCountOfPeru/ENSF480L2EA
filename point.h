// point.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef POINT_H
#define POINT_H
class point{
	private:
	double x,y;
	
	public:
	static int id;
	point(int a, int b);
	//Default ctor
	double getx();
	double gety();
	setx(double a);
	sety(double b);
	int counter();
	void display();
	
	
};
#endif