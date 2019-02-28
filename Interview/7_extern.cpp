#include <iostream>
using namespace std;

extern int z;

int main()
{
	cout << z << endl;
}

//including c file in a cpp file.  name mangling

// nm <.o file>