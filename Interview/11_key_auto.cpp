#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Base
{
public:
	int temp;
};

int main()
{
	auto a = 10;
	cout << typeid(a).name() << endl;
	auto str = "phani";
	cout << typeid(str).name() << endl;
	auto ptr = new Base;
    cout << typeid(ptr).name() << endl;
    ptr->temp = 10;
    cout << ptr->temp << endl;
	return 0;
}