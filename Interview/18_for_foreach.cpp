#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v(5,10);
    int arr[5] = {11, 11, 11, 11, 11};

	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	for(int i: arr)   //no range based, but supports array too
	{
		cout << i << " ";
	}
	cout << endl;
 
	for_each(v.begin() + 2, v.end(), [](int i)    //range based, but does not support array
	{
		cout << i << " ";
	}
	);

	cout << endl;
}