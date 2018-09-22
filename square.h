// file: square.h

#include "shape.h"

class Square: public Shape{
	
	public:
	Square(const char* s, double x, double y,unsigned int a);
	
	unsigned int area();
	
	unsigned int perimeter();
	
	unsigned int get_sideA();
	
	void set_sideA(unsigned int a);
	
	virtual void display();
	

	protected:
	unsigned int side_a;
	
	private:
	
};