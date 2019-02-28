// C++ code to demonstrate the working of iterator, begin() and end()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;

/*
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };

	// Declaring iterator to a vector
	vector<int>::iterator ptr;

	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";
	cout << endl;

    // Declaring iterator to a vector
    vector<int>::iterator ptr1 = ar.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr1, 3);

    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *ptr1 << " " << endl;

    ptr1 = ar.begin();

    auto it = next(ptr1, 2);
    cout << *it << endl;

    advance(ptr1,2);
    auto it2 = prev(ptr1,1);
    cout << *it2 << endl;

	return 0;
}*/
