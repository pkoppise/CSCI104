#include <iostream>
using namespace std;

class Base
{
public:
	Base():Base(0,0) { cout << "default" << endl;}
	Base(int a):Base(a,0) {cout << "One param" << endl;}
	Base(int a, int b): x(a),y(b) { 
		//Write important code here
		cout << "Two param" << endl;}
private:
	int x;
	int y;
};


int main()
{
	Base b;
	Base b1(2);
	Base b2(3,4);
	return 0;
}