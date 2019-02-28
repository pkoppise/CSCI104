// C++ program to illustrate the Modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;
/*
int main()
{
	// Assign vector
	vector<int> v(10);
	cout << v.size() << endl;

	// fill the array with 10 five times and size reduces if previously size is mentioned
	v.assign(5, 10);
	cout << v.size() << endl;

	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();

	cout << "The vector elements are: ";
	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element
	v.pop_back();

	// prints the vector
	cout << "\nThe vector elements after removing last elemet are: ";
	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
    cout << endl;

	// inserts 5 at the beginning
	v.insert(v.end(), 5);
	// prints the vector
	cout << "\nThe vector elements after inserting at end are: ";
	for (unsigned int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

	vector<int> temp(3,22);
	v.insert(v.begin() + 2, begin(temp), end(temp));
	cout << "\nThe vector elements after inserting range of elements are: ";
	for (unsigned int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
    cout << endl;


	cout << "\nThe first element is: " << v[0];

	// removes the first element
	v.erase(v.begin());

	cout << "\nThe first element is: " << v[0];

	// inserts at the beginning
	v.emplace(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	// Inserts 20 at the end
	v.emplace_back(20);
	//v.insert(v.end(), 21);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// erases the svector
	v.clear();
	cout << "\nVector size after erase(): " << v.size();

	// two vector to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);

	cout << "\n\nVector 1: ";
	for (unsigned int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (unsigned int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	// Swaps v1 and v2
	v1.swap(v2);

	cout << "\nAfter Swap \nVector 1: ";
	for (unsigned int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (unsigned int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

}*/
/*
int main()
{
    vector<string> Scientist;
	Scientist.push_back("James Maxwell");
    Scientist.push_back("Edwin Hubble");
    Scientist.push_back("Charles Augustin de Coulomb");
    Scientist.push_back("Louis Pasteur");

    vector<string>::iterator it = find(Scientist.begin(),Scientist.end(),"James Maxwell");
    cout << it - Scientist.begin() + 1 << endl;
	return 0;
}*/
