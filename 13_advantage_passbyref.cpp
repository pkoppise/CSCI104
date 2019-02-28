// Computes rectangle area, 
// prints it, & returns it

#include<iostream>
#include<vector>
using namespace std;

int sum(const vector<int>& dat) // To avoid copy of big data structures pass them by refernces 
{                               // const does not allow to modify the data (provides protection)
	int s = 0; 
	for(unsigned int i=0; i < dat.size(); i++)
	{
		s += dat[i];
	}
	return s;
}


int main() 
{
	int result;
	vector<int> x = {1,2,3,4};
	result = sum(x); 
	cout << result << endl;
}

