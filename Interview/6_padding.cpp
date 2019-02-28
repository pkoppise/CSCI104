#include <iostream>
using namespace std;

//#pragma pack(1)
struct Base
{
	double b;   //8

	//8 -> 4 + 4
	int a; 
	int d;  

	//8-> 4(1,1) + 4
	char h; 
	char c; 
	int k; 
};

int main()
{
	cout << sizeof(Base) << endl;
}