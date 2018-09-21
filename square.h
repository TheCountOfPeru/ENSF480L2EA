// file: square.h

class Square: public Shape{
	
	public:
	Square(const schar* s, double x, double y,unsigned int a);
	
	unsigned int area();
	
	unsigned int perimeter();
	
	unsigned int get_sideA();
	
	void set_sideA(unsigned int a);
	
	void display();
	

	protected:
	unsigned int side_a;
	
	private:
	
};