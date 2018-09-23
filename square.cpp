// file: square.cpp

#include <iostream>
#include "square.h"

using namespace std;

Square::Square(const char* s, double x, double y, double a):
Shape(s,x,y){
	side_a = a;
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
	
	printf("Square Name: %s\n", Shape::getName());
	Shape::getOrigin().display();
	cout<<"Side a: "<< side_a << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
}
	