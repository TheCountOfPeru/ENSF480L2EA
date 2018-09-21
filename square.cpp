// file: square.cpp

#include <iostream>
#include "square.h"

Square::Square(const schar* s, double x, double y,unsigned int a):
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
	
	cout<<"Square Name: "<<getName
}
	