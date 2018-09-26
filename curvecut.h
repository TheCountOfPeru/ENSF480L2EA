// file: curvecut.h

#ifndef CURVECUT_H
#define CURVECUT_H
#include "circle.h"
#include "rectangle.h"

class CurveCut: public Circle, public Rectangle
{
	public:
	
	CurveCut(const char* s, double x, double y, double r, double w, double l);
	
	CurveCut(const CurveCut& src);
	
	~CurveCut();
	
	CurveCut& operator =(const CurveCut& rhs);
	
	virtual double area();
	
	virtual double perimeter();
	
	virtual void display();
	
	
	protected:
	
	
	
};
#endif