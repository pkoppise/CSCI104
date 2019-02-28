#include <iostream>
using namespace std;

class Base final   //compile error
{
private:
	int b_var;
public:
	Base() {}
	Base(int var): b_var(var) {}
	~Base() {}
};

class Derived: public Base
{
private:
	int d_var;
public:
	Derived() {}
	Derived(int var1, int var2): Base(var1),d_var(var2) {} 
	~Derived() {}
};

int main()
{
	Derived d(10,20);
	return 0;
}

