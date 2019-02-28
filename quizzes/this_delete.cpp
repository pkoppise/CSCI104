#include <iostream>
using namespace std;
/*
class Test
{
private:
  int x;
public:
  Test() {x = 0;}
  void destroy()  { delete this; }
  void print() { cout << "x = " << x; }
};

int main()
{
  Test obj;
  obj.destroy();
  obj.print();
  return 0;
}*/

/*
class A
{
public:
	void fun()
	{
		delete this;
	}
};

int main()
{
//Following is Valid
A *ptr = new A;
ptr->fun();
ptr = NULL; // make ptr NULL to make sure that things are not accessed using ptr.


//And following is Invalid: Undefined Behavior
A a;
a.fun();

getchar();
return 0;
}*/
