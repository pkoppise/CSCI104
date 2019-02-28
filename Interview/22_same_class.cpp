#include <iostream>
#include <typeinfo>
using namespace std;

class A{};

class B{};


int main(int argc, char const *argv[])
{
	A a1, a2;
	B b1, b2;

	if (typeid(a1) == typeid(b1))
	{
		cout << "Objects a1,b1 belongs to same class" << endl;
	}
	else
	{
		cout << "Objects a1,b1 does belongs to same class" << endl;
	}

	if (typeid(a1) == typeid(a2))
	{
		cout << "Objects a1,a2 belongs to same class" << endl;
	}
	else
	{
		cout << "Objects a1,a2 does belongs to same class" << endl;
	}

	return 0;
}