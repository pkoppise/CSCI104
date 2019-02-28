#include <iostream>
#include "14_templates.h"
using namespace std;

int main()
{
	Max<int> obj(3.99,4.63);
	cout << obj.GetMax() << endl;
	return 0;
}