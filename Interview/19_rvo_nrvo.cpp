//RVO-Return Value Optimization
//NRVO - Named Return Value Optimization

#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "constructor called" << endl;}
	Base(const Base &) { cout << "copy constructor called" << endl;}
};

Base func()
{
	Base obj;
	//return Base();
	return obj;
}

int main()
{
	Base b = func();
	return 0;
}