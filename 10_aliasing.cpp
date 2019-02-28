#include <iostream>
using namespace std;


int main()
{
	int y = 3, *ptr;
	ptr = &y;
	cout << *ptr << endl;

	int &x = y;  
    x++; // y just got incremented
    cout << y << endl;
    return 0;
}
