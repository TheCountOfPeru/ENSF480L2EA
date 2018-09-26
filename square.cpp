// file: square.cpp

#include <iostream>
#include "square.h"

using namespace std;

Square::Square(const char* s, double x, double y, double a):
Shape(s,x,y){
	side_a = a;
}


Square::Square(const Square& src):Shape(src){
	
	side_a = src.side_a;
}
	
Square::~Square(){}
	
Square& Square::operator =(const Square& rhs){
	
	Shape::operator = (rhs);
	side_a = rhs.side_a;
	return *this;
}


double Square::area(){
	return side_a * side_a;
}
	
	
double Square::perimeter(){
	
	return side_a * 4;
}
	
	
double Square::get_sideA(){
	
	return side_a;
}
	
	
void Square::set_sideA(double a){
	
	side_a = a;
}
	
void Square::display(){
	
	cout<<"Square Name: "<< getName() << endl;
	getOrigin().display();
	cout<<"Side A: "<< side_a << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
}
	