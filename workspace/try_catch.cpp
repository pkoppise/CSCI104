#include <iostream>
using namespace std;

void fun(int *ptr, int x)
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
	/* Some functionality */
}

/*
int main()
{
	try {
	    fun(NULL, 0);
        cout << "After try" << endl;
	}
	catch(...) {
		cout << "Caught exception from fun()" << endl;
	}
    cout << "After Catch" << endl;
	return 0;
}*/
