//  shape.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee


#include "point.h"
#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;

Shape::Shape(const char *s, double x, double y):origin(x,y)
{
	shapeName = new char[strlen(s)+1];
	strcpy(shapeName, s);
	cout << "\nconstructor with char* argument is called. \n";
}
	//ctor
	
	
Shape::Shape(const Shape& source):origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1])
{
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}


Shape::~Shape()
{
	delete [] shapeName;
}
	//dtor
	
	
Shape& Shape::operator =(const Shape& rhs)
{
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
		}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}
	//overload assignment
	
	
Point& Shape::getOrigin()
{
	return origin;
}


char* Shape::getName()
{
	return shapeName;
}


void Shape::display()
{
	printf("Shape Name: %s\n", getName());
	origin.display();
}


double Shape::distance(Shape& other)
{
	return origin.distance(other.getOrigin());
}


double Shape::distance(Shape& the_shape, Shape& other)
{
	return Point::distance(the_shape.getOrigin(), other.getOrigin());
}


void Shape::move(double dx, double dy)
{
	origin.setx(origin.getX()+dx);
	origin.sety(origin.getY()+dy);
}