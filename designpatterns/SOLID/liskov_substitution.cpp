#include <iostream>
using namespace std;

class Rectangle
{
protected:
	int width;
	int height;
public:
	Rectangle(int w, int h): width(w),height(h) {}
	virtual void setwidth(int w) {width = w;}
	virtual int getwidth() const {return width;}
	virtual void setheight(int h){height = h;}
	virtual int getheight() const {return height;}
	int area() {return width * height;}
	virtual ~Rectangle() {}
};


class Square:public Rectangle
{
public:
	Square(int s):Rectangle(s,s) {}
	void setwidth(int w) 
	{
		this->width = w; this->height = w;
	}
	int getwidth() const {return width;}
	void setheight(int h)
	{
		this->height = h; this->width  = h;
	}
	int getheight() const {return height;}	
};

void process(Rectangle &r)
{
	int w = r.getwidth();
	r.setheight(8);

	cout << "Expected:" << w*8 << endl;
	cout << "Actual:"<< r.area() << endl;
}

/*
int main()
{
	Square ss(10);
	process(ss);
	return 0;
}*/

//Note: Use factory method here
