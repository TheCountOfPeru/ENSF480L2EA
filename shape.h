// shape.h
// ENSF 480 - Lab 2 - Exercise A

#ifndef SHAPE_H
#define SHAPE_H
class shape{
	private:
	point origin;
	char* shapeName;
	public:
	shape(const char *s);
	//ctor
	shape(const shape& source);
	~shape();
	//dtor
	shape& operator =(const shape& rhs);
	//overload assignment
	point* getOrigin();
	char* getName();
	void display();
	double distance(shape& other);
	static double distance(shape& the_shape, shape& other);
	void move(double dx, double dy);
	
};
#endif