#include <iostream>
#include <algorithm>

using namespace std;

/*
void show(int *ptr)
{
	for(int i = 0; i < 10; ++i)
		cout << ptr[i] << " ";
}

int main()
{
	int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	cout << "\n The array before sorting is : ";
	show(a);

	sort(a, a+10);

	cout << "\n\n The array after sorting is : ";
	show(a);

	return 0;
}*/

/*
void show(int *ptr, int arraysize)
{
	for (int i = 0; i < arraysize; ++i)
		cout << ptr[i] << " ";
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "\n The array is : ";
	show(a, asize);

	cout << "\n\nLet's say we want to search for 2 in the array";
	cout << "\n So, we first sort the array";
	sort(a, a + asize);
	cout << "\n\n The array after sorting is : ";
	show(a, asize);
	cout << "\n\nNow, we do the binary search for 6";
	if (binary_search(a, a + asize, 6))
		cout << "\nElement found in the array";
	else
		cout << "\nElement not found in the array";

	cout << "\n\nNow, say we want to search for 10";
	if (binary_search(a, a + 10, 10))
		cout << "\nElement found in the array";
	else
		cout << "\nElement not found in the array";

	return 0;
}*/

