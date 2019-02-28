#include <iostream>
using namespace std;

void show(int a) { cout << "Int" << endl;}
void show(double b) { cout << "double" << endl;}
void sample() {}

class Base
{
public:
	void showOBJ() { cout << "showOBJ" << endl;}
};

int main()
{
	show(1);
	Base obj;
	obj.showOBJ();
	return 0;
}
