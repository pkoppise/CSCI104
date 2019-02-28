#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "Constructor called" << endl;}
	~Base() { cout << "Destructor called" << endl;}
	void Test() { cout << "Test" << endl;}
};

int main()
{ 
	//Base obj;
	Base();
	Base().Test();
	cout << "Inside main" << endl;
	return 0;
}

//Do not call destructor separately unless until you are using placement new operator