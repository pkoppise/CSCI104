#include <iostream>
using namespace std;

class Base
{
	int x;
	int y;
public:
	Base() {cout << "constructor" << endl;}
	~Base() {cout << "destructor" << endl;}
};

int main()
{
	Base *b = new Base;
    delete b;
	
	char *memory = new char[10 * sizeof(Base)];
	Base *b1     = new(&memory[0])Base();
	Base *b2     = new(&memory[4])Base();
	
	delete b1;
	delete b2;
    

	return 0;	
}
	
