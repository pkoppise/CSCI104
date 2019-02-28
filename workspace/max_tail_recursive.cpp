#include <iostream>
#include <algorithm>
using namespace std;
/*
// You can prototype a helper function here if you need it
int amaxh(int* array, int len, int currm);

// This is the primary max() function that the user should call
int amax(int* array, int len)
{
	return amaxh(array,len,-1);
}

// You can write your helper function here if you need it
int amaxh(int* array, int len, int currm)
{
	if(len == 0) { return currm; }
	else
	{
		int winner = std::max(currm, array[0]);
        return amaxh(array + 1, len - 1, winner);
	}
}

int sumtail(int* array, int len, int csum)
{
	if(len == 0)
	{
		return csum;
	}
	else
	{
		int temp = csum + array[0];
		return sumtail(array + 1, len - 1, temp);
	}
}



int main() {
   int d1[] = {7, 3, 18, 6, 5, 10, 4, 2};
   cout << amax(d1, 8) << endl;
   cout << sumtail(d1,8,0) << endl;

   return 0;
}*/
