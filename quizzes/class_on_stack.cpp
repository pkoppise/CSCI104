#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
/*
class Test {
private:
    void* operator new(size_t size) {}
    void* operator new[](size_t size) {}
};

int main()
{
    Test obj;  //class object can be created only on stack
    //Test *ptr = new Test;
    return 0;
}*/

/*
class A
{
    int i;
public:
    A(int ii = 0) : i(ii) { cout << "A const." << endl;}
    void show() {  cout << i << endl;  }
};

class B
{
    int x;
public:
    B(int xx) : x(xx) {cout << "B const." << endl;}
    operator A() const { cout << "A operator." << endl; return A(x); }
};

void g(A a)
{
    a.show();
}

int main()
{
    B b(10);
    g(b);
    g(20);
    return 0;
}*/

/*
class Test {
    int x;
public:
    void* operator new(size_t size);
    void operator delete(void*);
    Test(int i) {
        x = i;
        cout << "Constructor called n";
    }
    ~Test() { cout << "Destructor called n"; }
};


void* Test::operator new(size_t size)
{
    cout << "size:" << size << endl;
	void *storage = malloc(size);
    cout << "new called n";
    return storage;
}

void Test::operator delete(void *p )
{
    cout<<"delete called n";
    free(p);
}

int main()
{
    Test *m = new Test(5);
    delete m;
    return 0;
}*/

