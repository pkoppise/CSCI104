#include <iostream>
#include <vector>
using namespace std;
/*
int bsearch(vector<int> mylist, int k, int start, int end)
{
	if(mylist.size() == 0)
	{
		return -1;
	}
	while(start <= end)
	{
		int mid = (start + end)/2;
		if(k == mylist[mid])
			return mid;
		else if(k < mylist[mid])
			end = mid;
		else
			start = mid+1;
	}
	return -1;
}

int main()
{
	vector<int> a(10,0);
	size_t size_a = a.size();
	for (unsigned int i = 0; i < size_a; i++)
	{
        a[i] = i + 5;
	}

    vector<int>::iterator iter;
    for(iter = a.begin(); iter != a.end(); ++iter)
    {
    	cout << *iter << endl;
    }

    int start = 0;
    int end = size_a - 1;
    int index = bsearch(a,a.back(),start,end);

    cout << "index:" << index << "and a[index]:" << a[index] << endl;
	return 0;
}*/
