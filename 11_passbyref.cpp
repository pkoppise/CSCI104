#include <iostream>
using namespace std;

void swapit(int &, int &);


int main()
{
	int x=5,y=7;
	swapit(x,y);
	cout << "x,y=" << x << ","<<  y << endl;
}

void swapit(int &p, int &q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}

