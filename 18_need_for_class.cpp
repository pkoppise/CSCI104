#include <iostream>
using namespace std;

struct Machine{
	int a;
	int b;
};

void change_a(Machine* c)
{
    c->a = 30;
}

void change_b(Machine* c)
{
    c->b = 40;
}

/*
int main()
{
	Machine m;
	m.a = 10;
	m.b = 20;

	cout << m.a << endl;
	cout << m.b << endl;

	change_a(&m);
	change_b(&m);

	cout << m.a << endl;
	cout << m.b << endl;
}*/


