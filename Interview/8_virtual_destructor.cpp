#include <iostream>
using namespace std;

class Base
{
public:
	Base() {}
	virtual void fun() {cout << "Base function" << endl;}
	virtual ~Base() {cout << "Base Class Destructor" << endl;}
};

class Derived: public Base
{
public:
	Derived():Base() {}
    void fun() {cout << "Derived function" << endl;} 
    ~Derived() { cout << "Derived class Destructor" << endl;}
};


int main()
{
	Base *bp1 = new Base;
	Base *bp2 = new Derived;

	bp1->fun();
	bp2->fun();

	delete bp1;
	delete bp2;
}