#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
// A comparison function which is used by sort() in largestNumber()
int Compare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
 	if (XY > YX)
 	{
 		return 1;
 	}
 	else
 	{
 		return 0;
 	}
    
}
 
// This function prints the largest number
void largestNumber(string  arr[], int n)
{
    // Sort the numbers using library sort funtion.
    sort(arr, arr+n, Compare);
 	
 	//printing the sorted array, which is the largest number
    for (int i=0; i < n ; i++ )
        cout << arr[i];
}
 
int main()
{
    string arr[] = {"2", "1", "25", "34", "8"};
    int n = sizeof(arr)/sizeof(arr[0]);
    largestNumber(arr, n);
 
   return 0;
}
