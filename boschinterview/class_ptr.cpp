#include <iostream>
using namespace std;

class A
{
public:
	int a;
	void func() {cout << "function called" << endl;}
	static void func2() {cout << "static function called" << endl;}
	//static void func3() {cout << "static function called with this" << endl; this-> a = 5;}
	//static void func4() const {cout << "static function called with const" << endl; }
	const static void func5() {cout << "static function called with const return" << endl; }
	const static int func6() {cout << "static function called with const int return" << endl; return 1;}

};

int main()
{
	A *ptr = NULL;
	ptr->func();
	//ptr->a = 5; //segmentation error
	ptr->func2();
	//ptr->func3();  //compile error 
	//ptr->func4();  //compile error
	ptr->func5();
	const int k = ptr->func6();
	cout << k << endl;

	static const int h = 10;
	//h = 20;  //compile error
	return 0;
}

