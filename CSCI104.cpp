#include <iostream>
#include <algorithm>
using namespace std;

class ObjA
{
public:
   ObjA():val(0)
   {
   }
   ObjA(int v)
   {
      val = v;
   }
   int get() const { return val; }
private:
   int val;
};

/*
int main()
{
   ObjA a;
   cout << "A's output: " << a.get() << endl;
   ObjA a1(20);
   cout << "A's output: " << a1.get() << endl;
   return 0;
}*/
