// file: square.cpp

#include <iostream>
#include "square.h"

using namespace std;

Square::Square(const char* s, double x, double y, unsigned int a):
Shape(s,x,y){
	side_a = a;
}


unsigned int Square::area(){
	
	return side_a * side_a;
}
	
	
unsigned int Square::perimeter(){
	
	return side_a * 4;
}
	
	
unsigned int Square::get_sideA(){
	
	return side_a;
}
	
	
void Square::set_sideA(unsigned int a){
	
	side_a = a;
}
	
void Square::display(){
	
	cout<<"Square Name: "<< shapeName <<endl;
	cout<<"X-coordinate: "<< origin.getX() << endl;
	cout<<"Y-coordinate: "<< origin.getY() << endl;
	cout<<"Side a: "<< side_a << endl;
	cout<<"Area: "<< area() << endl;
	cout<<"Perimeter: "<< perimeter() << endl;
}
	