// A C++ program to demonstrate working of sort(),reverse()
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;

/*
int main()
{
	// Initializing vector with array values
	int arr[] = {10, 20, 5, 23 ,42 , 15, -1};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

	// Sorting the Vector in Ascending order
	sort(vect.begin(), vect.end());

	cout << "\nVector after sorting is: ";
	for (int i=0; i<n; i++)
	cout << vect[i] << " ";

	// Reversing the Vector
	//reverse(vect.begin(), vect.end());

	//cout << "\nVector after reversing is: ";
	//for (int i=0; i<6; i++)
	//	cout << vect[i] << " ";

	cout << "\nMaximum element of vector and position is: ";
	cout << *max_element(vect.begin(), vect.end()) << " ";
	cout << max_element(vect.begin(), vect.end()) - vect.begin();


	cout << "\nMinimum element of vector and position is: ";
	cout << *min_element(vect.begin(), vect.end()) << " ";
	cout << min_element(vect.begin(), vect.end()) - vect.begin();

	// Starting the summation from 0
	cout << "\nThe summation of vector elements is: ";
	cout << accumulate(vect.begin(), vect.end(), 0);
	cout << endl;

	cout << count(vect.begin(), vect.end(), 20) << endl;
	if(find(vect.begin(),vect.end(),-1) != vect.end())
	{
		cout << "Element found" << endl;
	}
	else
	{
		cout << "Element was not found" << endl;
	}

	bool result = binary_search(vect.begin(), vect.end(), 20);
	cout << result << endl;

    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 18);

    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);

    cout << "The lower bound value and it's position: ";
    cout << *q << " " << q-vect.begin() << endl;

    cout << "The upper bound valueand it's position: ";
    cout << *p << " " << p-vect.begin() << endl;

	return 0;
}*/

/*
int main()
{
	// Initializing vector with array values
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is :";
	for (unsigned int i=0; i<vect.size(); i++)
		cout << vect[i]<<" ";

	// Delete second element of vector
	vect.erase(vect.begin()+1);

	cout << "\nVector after erasing the index 1 element: ";
	for (unsigned int i=0; i<vect.size(); i++)
		cout << vect[i] << " ";

	// sorting to enable use of unique()
	sort(vect.begin(), vect.end());

	cout << "\nVector before removing duplicate "
			" occurrences: ";
	for (unsigned int i=0; i<vect.size(); i++)
		cout << vect[i] << " ";

	// Deletes the duplicate occurrences
	vect.erase(unique(vect.begin(),vect.end()),vect.end());

	cout << "\nVector after deleting duplicates: ";
	for(unsigned int i=0; i< vect.size(); i++)
		cout << vect[i] << " ";

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:";
    for(unsigned int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";

    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:";

    for(unsigned int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";

    vect.erase(vect.begin() + 1, vect.begin() + 4);
    cout << "\nVector after erasing range of elements from 1, 2, 3, indexes:";
	for(unsigned int i=0; i<vect.size(); i++)
	       cout << vect[i] << " ";

    // Return distance of first to maximum element
    cout << "\nDistance between first to max element: ";
    cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));

	return 0;
}*/

