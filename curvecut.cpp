// file: curvecut.cpp

#include <iostream>
#include "curvecut.h"

using namespace std;

CurveCut::CurveCut(const char* s, double x, double y, 
	double r, double w, double l): Shape(s,x,y), Circle(s,x,y,r), 
	Rectangle(s,x,y,w,l){}
	
CurveCut::CurveCut(const CurveCut& src): Shape(src), Circle(src),
	Rectangle(src){}
	
CurveCut::~CurveCut(){}
	
CurveCut& CurveCut::operator =(const CurveCut& rhs){
	Shape::operator = (rhs);
	Circle::operator = (rhs);
	Rectangle::operator = (rhs);
	
	return *this;
}

double CurveCut::area(){
	
	return (Rectangle::area())-((Circle::area())/4);
}

double CurveCut::perimeter(){
	
	return ((Rectangle::perimeter())-(2*radius)+((Circle::perimeter())/4));
}

void CurveCut::display(){
	
	cout<< endl <<"CurveCut Name: "<< getName() << endl;
	getOrigin().display();
	cout<<"Width: "<< side_a << endl;
	cout<<"Length: "<< side_b << endl;
	cout<<"Radius Of Cut: "<< radius << endl << endl;
}