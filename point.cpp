//  point.cpp
// ENSF 480 Lab 2 - FALL 2018 - Exercise A
// Author - Jonathan Yee

#include "point.h"
#include <iostream>

using namespace std;

point::point(int a, int b)
{
	x = a;
	y = b;
	id++;
}
double point::getx()
{
	return x;
}
double point::gety()
{
	return y;
}
int point::counter()
{
	return id;
}
void point::display()
{
	printf("X-coordinate: %4.2f\nY-coordinate: %4.2f", getx(), gety());
	
}