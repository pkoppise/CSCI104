#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <class Container>
auto getValue(Container& stl)
{
	auto it = stl.begin();
	std::advance(it, 1);
	return *it;
}


int main()
{
	vector<int> sample = {0,1,2,3,4};
 	vector<double> sample2 = {10,20,30,40,50};
 	list<int> sample3 = {5,6,7,8,9};
	cout << getValue(sample) << endl;
	cout << getValue(sample2) << endl;
	cout << getValue(sample3) << endl;
	return 0;
}
