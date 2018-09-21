//  shape.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee


#include "point.h"
#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;

shape::shape(const char *s, double x, double y):origin(x,y)
{
	//shapeName = new char[lengthM + 1];
	//strcpy(shapeName, s);
	cout << "\nconstructor with char* argument is called. \n";
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
point* shape::getOrigin()
{
	return NULL;
}
char* shape::getName()
{
	return shapeName;
}
void shape::display()
{
	origin.display();
	//printf("Shape Name: %s", getName());
}
double shape::distance(shape& other)
{
	return 0;
}

double shape::distance(shape& the_shape, shape& other)
{
	return 0;
}

void shape::move(double dx, double dy)
{
	
}