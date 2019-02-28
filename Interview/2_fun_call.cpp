#include <iostream>
using namespace std;

void fun()
{
	cout << "Inside function" << endl;
}

int fun2()
{
	cout << "Inside int function" << endl;
	return 10;
}

class Base
{
public:
	Base()
	{
		fun();
	}
private:
	static int var;
};


int Base::var = fun2();
Base b;


int main()
{
	cout << "Inside main" << endl;
}