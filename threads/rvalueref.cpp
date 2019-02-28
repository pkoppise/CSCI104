//int a = 5; // a is l value
//int& b = a;// b is a l-value reference
//int&& c = 10; // c i s a r-value reference

#include <iostream>
using namespace std;

void printInt(int& i)  { cout << "lvalue ref:" << i << endl; }
void printInt(int&& i) { cout << "rvalue ref:" << i << endl; }
//void printInt(int i) {cout << i << endl; }
//compiler gives error we can only overload with l-value reference and r-value reference

int main()
{
	int a = 5;
	printInt(a);
	printInt(6);
	printInt(move(a)); // l value is converted to r-value and r-value is called
	return 0;
}

  