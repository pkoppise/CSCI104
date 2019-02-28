// C++ code to demonstrate working of all_of()
#include<iostream>
#include<algorithm> // for all_of()
#include<vector>
#include<numeric>

/*
using namespace std;
int main()
{
	// Initializing array
	int ar[6] = {1, 2, 3, 4, 5, -6};
	vector<int> vec(ar, ar+6);

	// Checking if all elements are positive
	all_of(vec.begin(), vec.end(), [](int x)
			{
				return x>0;
			}
	)?
	cout << "All are positive elements" << endl:
	cout << "All are not positive elements" << endl;

	any_of(vec.begin(), vec.end(), [](int x)
			{
				return x<0;
			}
	)?
	cout << "There exists a negative element" << endl:
	cout << "All are positive elements" << endl;

	int arr[6] = {1, 2, 3, 4, 5, 6};
	vector<int> vec2(arr, arr+6);
	none_of(vec2.begin(), vec2.end(), [](int x) { return x<0; })?
			cout << "There are no negative elements" << endl :
			cout << "There are negative elements" << endl;

	int arr2[6];
	copy_n(arr,6,arr2);
    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << arr2[i] << " ";
    cout << endl;

    //vector not supported for copy_n

    //iota array way
    int  arr3[6] = {0};
    iota(arr3, arr3+6, 20);
    cout << "The new array after iota is : ";
    for (int i=0; i<6 ; i++)
       cout << arr3[i] << " ";
    cout << endl;

    //iota vector way
    vector<int> iar(6,0);
    iota(iar.begin(), iar.end(), 20);
    cout << "The new vector after iota is : ";
    for (int i=0; i<6 ; i++)
       cout << iar[i] << " ";
    cout << endl;

	return 0;
}*/
