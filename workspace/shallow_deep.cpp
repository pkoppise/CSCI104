#include <iostream>
using namespace std;
/*
class CSample
{
    int *ptr;
    int N;
public:
    //default constructor
     CSample(): ptr(NULL),N(0) {
     }

     //user-defined constructor
     CSample(int N)
     {
    	 cout << "user defined called" << endl;
     	 this->N = N;
    	 this->ptr = new int[this->N];
    	 cout << ptr << endl;
     }

    //copy constructor
    CSample(const CSample &c) {
    	 cout << "Copy called" << endl;
         this->N   = c.N;
         this->ptr = new int[this->N];
         cout << ptr << endl;
     }

     int* GetX()
     {
         return ptr;
     }
     ~CSample()
     {
        delete []ptr;
     }
};

int main()
{
    CSample ob1(10); //user-defined constructor is called.
    cout << ob1.GetX() << endl;

    CSample ob2 = ob1; //user defined copy constructor called or deep copy is done here.
    cout << ob2.GetX() << endl;

    CSample ob3; //Default constructor called
    ob3 = ob1; //default overloaded = operator function called or shallow copy is done here.
    cout << ob3.GetX() << endl;
}*/
