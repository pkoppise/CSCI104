#include <iostream>
using namespace std;
/*
int main()
{
	int a[] = {2,4,5,8,1};

	int *ptr1 = &a[0];
	int *ptr2 = ptr1 + 3;
	int *ptr3 = a;

	cout << *ptr2 << endl;
	cout << ptr2 - ptr1 << endl;
	cout << ptr3[2] << endl;

	int *ptr = new int[9];
	for(int i = 0; i < 9; i++)
	{
		ptr[i] = i ^ (i + 2);
	}

	for(int i = 0; i < 9; i++)
	{
		cout << *(ptr + i) << endl;
	}
	return 0;

}*/

/*
int x;
void Q(int z)
{
	z += x;
	cout << z << endl;
}

void P(int *y)
{
	int x = *y + 2;
	Q(x);
	*y = x - 1;
    cout << x << endl;
}

struct Node
{
	int data = 20;
};
int main()
{
	x = 5;
	P(&x);
	cout << x << endl;

	Node v;
	cout << v.data << endl;
    return 0;
}*/

//Increment and decrement operators are allowed, while using array we cannot do it.
//Memory for static variables is created on data segment like similar to  global variables


