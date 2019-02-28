#include<iostream>
using namespace std;
/*
class Base
{
int x;
public:
    Base(int val):x(val) {}
	virtual void fun() = 0;
	int getX() { return x; }
	virtual ~Base() {}
};


// This class inherits from Base and implements fun()
class Derived: public Base
{
	int y;
public:
	Derived(int val):Base(val),y(0) {}
	void fun() { cout << "fun() called" << endl; }
};

int main(void)
{
	//Base t or Base *ptr = new Base------>gives error
	Derived d(10);
	d.fun();
	cout << d.getX() << endl;

	Base *bp = new Derived(20); //no error since reference is of derived class
	bp->fun();
	cout << bp->getX() << endl;
	return 0;
}*/

//If we do not override the pure virtual function in derived class,
//then derived class also becomes abstract class

//An abstract class can have constructors.
