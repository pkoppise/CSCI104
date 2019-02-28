#include <iostream>
#include <string>
using namespace std;


/*int main()
{
	float f = 3.5;
	int a = f; // this is how you do in C i.e. implicit conversion by compiler.
	cout << a << endl;
	int b = static_cast<int>(f);
	cout << b << endl;
	return 0;
}*/

/*
class Int {
	int x;

public:
	Int(int x_in = 0)
		: x{ x_in }
	{
		cout << "Conversion Ctor called" << endl;
	}
	operator string()
	{
		cout << "Conversion Operator" << endl;
		return to_string(x);
	}
};

int main()
{
	Int obj(3);

	//string str = obj;
	//cout << str << endl;
	//obj = 20;

	string str2 = static_cast<string>(obj);
	obj = static_cast<Int>(30);
	return 0;
}*/

/*
int main()
{
	char c = 'p';
	//int *ptr = (int *)&c; //no compile time error; run time error; become dangerous
	//*ptr = 5;
	//cout << *ptr << endl;

	int *ptr2 = static_cast<int*>(&c);  //compile time error
	*ptr2 = 10;
	cout << *ptr2 << endl;

	return 0;
}*/

/*
class Base {
};
class Derived : private Base { // Inherited private/protected not public
};

int main()
{
	Derived d1;
	Base* b1 = (Base*)(&d1); // allowed ; but not recommned
	//Base* b2 = static_cast<Base*>(&d1); //compile error due to private inheritance
	return 0;
}*/


//upcast ok, but down cast not ok, compiles , run time issues

/*
int main()
{
	int i = 10;
	void* v = static_cast<void*>(&i);
	int* ip = static_cast<int*>(v);
	return 0;
}*/

/*
//const casting
int main()
{
	//const int a = 10;
	//const int *ptr1 = &a;
	//int *ptr2 = const_cast<int*>(ptr1);
	//ptr2 = 20; //undefined behaviour as we are changing read only

	int a = 10;
	const int *ptr1 = &a;
	int *ptr2 = const_cast<int*>(ptr1);
	*ptr2 = 20;
	cout << *ptr2 << endl;
	cout << *ptr1 << endl;
	return 0;
}*/

/*
int fun(int* ptr)
{
	return (*ptr + 10);
}

int main(void)
{
	int val = 10;
	const int *ptr = &val;
	int *ptr1 = const_cast <int *>(ptr);
	cout << fun(ptr1) << endl;
	return 0;
}*/

// dynamic cast

class Base
{
public:
	virtual void print() {cout << "Base" << endl;}
	virtual ~Base() {}
	void base()
	{
		cout << "Base function" << endl;
	}
};

class Derived1:public Base
{
public:
	void print()
	{
		cout << "Derived1" << endl;
	}
	void fun1()
	{
		cout << "Derived 1 function" << endl;
	}
};

class Derived2:public Base
{
public:
	void print()
	{
		cout << "Derived2" << endl;
	}
	void fun2()
	{
		cout << "Derived 2 function" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base *bp = &d1;   //downcase
	bp->print();

	//Derived1 *dp1 = dynamic_cast<Derived1*>(bp);
	//dp1->print();
	Derived1 *dp1 = dynamic_cast<Derived1*>(bp);
	if(dp1 == nullptr)
	{
		cout << "NULL" << endl;
	}
	else
 	{
		cout << "NOT NULL" << endl;
	}

	/*Base *bp = new Derived1;
	bp->print();
	bp->base();
	cout << "-----------" << endl;

	Derived1 *d1 = static_cast<Derived1 *>(bp);  //casting  is must for upcast
	d1->print();
	d1->base();
	d1->fun1();

	Derived2 *d2 = dynamic_cast<Derived2 *>(bp);
	if(d2 == nullptr)
	{
		cout << "Casting not done" << endl;
	}
	else
	{
		cout << "casting done" << endl;
	}

	Derived1 dd1;
	Base *bptr = &dd1;  //down casting typecast is not mandatory but better*/

	float x = 2.0/3.0;
	cout << x << endl;
	return 0;
}
