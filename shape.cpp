//  shape.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "shape.h"
#include <iostream>

using namespace std;

shape::shape(const char *s, int x, int y)
{
	charsM = new char[lengthM + 1];
	strcpy(shapeName, s);
	origin(x,y);
	cout << "\nconstructor with char* argument is called. ";
}
	//ctor
shape::shape(const shape& source):origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1])
{
if(shapeName == NULL){
cerr << "Memory not available...";
exit(1);
}
strcpy(shapeName, source.shapeName);
}
shape::~shape()
{
	delete [] shapeName;
}
	//dtor
shape& shape::operator =(const shape& rhs)
{
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeNam)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
		}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}
	//overload assignment
point* shape::getOrigin()
{
	
}
char* shape::getName()
{
	
}
void shape::display()
{
	
}
double shape::distance(shape& other)
{
	
}
static double shape::distance(shape& the_shape, shape& other)
{
	
}
void shape::move(double dx, double dy)
{
	
}