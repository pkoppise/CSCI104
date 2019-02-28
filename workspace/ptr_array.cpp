#include <iostream>
using namespace std;
/*
int SumOfElements(int* ptr, unsigned int size)
{
	int sum = 0;
	for(unsigned int i=0; i < size; i++)
	{
		sum += ptr[i];
	}
	return sum;
}

void modifyElements(int* ptr, unsigned int size)
{
	for(unsigned int i = 0; i < size; i++)
	{
		ptr[i] = ptr[i] + 10;
	}
}

int main()
{
	int a[] = {2,4,5,8,1};
	unsigned int size = sizeof(a)/sizeof(a[0]);

	cout << size << endl;
	cout << a << endl;

	int *ptr1 = &a[0];
	int *ptr2 = ptr1 + 3;

	cout << *ptr2 << endl;
	cout << ptr2 - ptr1 << endl;

	int* ptr = a;
    for(unsigned int i=0; i < size; i++)
    {
    	cout << a[i] << endl;
    	cout << *(ptr + i) << endl;

    	cout << &a[i] << endl;
    	cout << (ptr + i) << endl;
    	cout << (a + i) << endl;

    	//cout << a++ << endl; invalid operation
    }

    for(unsigned int i = 0; i<size;i++)
    {
    	cout << *ptr++ << " "; //ptr++ is a valid operation
    }
    cout << endl;

	cout << SumOfElements(a, size) << endl;

	modifyElements(a, size);

	for(unsigned int i = 0; i<size;i++)
    {
    	cout << a[i] << " ";
    }
    cout << endl;
	return 0;
}*/
