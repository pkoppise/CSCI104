#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
/*
using namespace std;

vector<int> generateRadomNumbers(int min, int max, int n)
{
	vector<int> rList;
	srand((int)time(0));
	int i = 0;
	while(i++ < n) {
		int r = min + (rand() % (int)(max - min)) + 1;
        rList.push_back(r);
	}
	return rList;
}

int interp(int startVal, int endVal, int startId, int endId, int tarVal)
{
	//linear interpolation search formula
	return (((tarVal - startVal) * (float(endId - startId + 1)/float(endVal - startVal))) + startId);
}

int interpolation_search(vector<int> mylist, int k, int start, int end, int min, int max)
{
	if(mylist.size() == 0)
	{
		return -1;
	}

	while(start <= end)
	{
		if(start == end && k == mylist[start])
        {
			return start;
        }
		else
        {
			return -1;
        }

		int loc = interp(min, max, start, end, k);
		if(k == mylist[loc])
			return loc;
		else if(k < mylist[loc])
			end = loc;
		else
			start = loc+1;
		cout << start << " " << end << endl;
	}
	return -1;
}

int main()
{
	vector<int> a = generateRadomNumbers(400,900,100);
    vector<int>::iterator iter;
    for(iter = a.begin(); iter != a.end(); ++iter)
    {
    	cout << *iter << " ";
    }
    cout << endl;

    int index = interpolation_search(a, 532, 0, 99, 400, 900);
    cout << "index:" << index << "and a[index]:" << a[index] << endl;

    return 0;
}*/
