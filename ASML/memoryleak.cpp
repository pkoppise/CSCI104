#include <iostream>
using namespace std;

class Foo
{
public:
	virtual void func() = 0;
	virtual int getData() = 0;
	virtual ~Foo() { cout << "Foo Destructor called" << endl;}
};

class Bar: public Foo
{
public:
	Bar(): data(new int[3]) { cout << "Bar Constructor called" << endl;}
	~Bar() {
		cout << "Bar Destrcutor called" << endl;
		data--;
		delete data;
	}
	void func() override {
		cout << "Func" << endl;
		data[0] = 1;
		data[1] = 2;
		data[2] = 3;
	}

	int getData() override { return *data++; }

private:
	int *data;
};

class Bar2: public Bar
{
public:
	Bar2() { cout << "Bar2 Constructor" << endl; }
	~Bar2() { cout << "Bar2 Destructor" << endl; }
	void func() override
	{
		cout << "Bar2" << endl;
	}
};

Foo* makeBar()
{
	return new Bar();
}

int main()
{
	Foo* foo = makeBar();
	foo->func();
	cout << foo->getData() << endl;
	delete foo;

    /*Bar2 bar;
    bar.func();
    cout << bar.getData() << endl;
    bar.Bar::func();
    cout << bar.getData() << endl;*/

	/*Bar2* bar2 = new Bar2();
	bar2->func();
	cout << bar2->getData() << endl;
	bar2->Bar::func();
	cout << bar2->getData() << endl;
	delete bar2;*/
	return 0;
}
