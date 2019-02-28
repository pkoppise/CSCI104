#include<iostream>
using namespace std;

/*
class Empty {};

class Derived1 : public Empty
{};

class Derived2 : virtual public Empty
{};

class Derived3 : public Empty
{
    char c;
};

class Derived4 : virtual public Empty
{
    char c;
};

class Dummy
{
    char c;
};

int main()
{
    cout << "sizeof(Empty) "    << sizeof(Empty) << endl;
    cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
    cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
    cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
    cout << "sizeof(Derived4) " << sizeof(Derived4) << endl;
    cout << "sizeof(Dummy) "    << sizeof(Dummy) << endl;

    return 0;
}*/

/*
int main()
{
    cout << sizeof(Empty) << endl;
	cout << sizeof(Derived) << endl;
    return 0;
}*/

/*
class Test
{
    static int x;
    int *ptr;
    int y;
};

int main()
{
    Test t;
    cout << sizeof(t) << " ";
    cout << sizeof(Test *);
}*/

/*
class Test
{
	int i;
public:
    Test(int x):i(x) { }
    int get() {return i;}
};

Test t(20);  // Global object
int main()
{
    Test t(10);  // local object
    std::cout << "value of i in local t: "<<t.get()<<'\n';
    std::cout << "value of i in global t: "<<::t.get()<<'\n';
    return 0;
}*/


