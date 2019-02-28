#include <iostream>
using namespace std;

int main()
{
	int* p, *q;
	int i, j;
	i = 5;
	j = 10;
	p = &i;
	cout << p << endl;
	cout << *p << endl;
  
    //*q = *p; segmenation fault i.e. we are try to access the memory which is no there yet
	q = p;
	*q = j;
	cout << q << endl;
	cout << *q << endl;
	cout << *p << endl;
}
