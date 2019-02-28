#include <vector>
#include <iostream>

using namespace std;
/*
void print_vec(vector<int> input)
{
  for(vector<int>::iterator it = input.begin(); it != input.end(); ++it)
  {
      cout << *it << " ";
  }
  cout << endl;
}

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

int partition(vector<int>& mylist, int start, int end)
{
	int pivot = mylist[end];
    int left = start;
	int right = end-1;
    while(left < right)
	{
		while(mylist[left] <= pivot && left < right)
		{
			left++;
		}
		while(mylist[right] >= pivot && left < right)
		{
			right--;
		}
		if(left < right)
		{
			swap(mylist[left], mylist[right]);
		}
    }
	if(mylist[right] > mylist[end])
	{
		swap(mylist[right], mylist[end]); // put pivot back at location
		return right;
	}
	return end;
}*/

/* The main function that implements QuickSort
   arr[] --> Array to be sorted,
   low --> Starting index,
   high --> Ending index */

/*void quickSort(vector<int>& arr, int low, int high)
{
	if(low >= high)
	{
		//base case
		return;
	}
	else
	{*/
		/* pi is partitioning index, arr[p] is now at right place */
		/*int pi = partition(arr, low, high);

		// Separately sort elements before partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}*/

/*
// Driver program to test above functions
int main()
{
	int d1[] = {9, 8, 7, 6, 5, 4, 3, 2};
	vector<int> v1(d1, d1 + 8);
	cout << "Actual array:" << endl;
	print_vec(v1);
	quickSort(v1, 0, v1.size() - 1);
	cout << "Sorted array:" << endl;
	print_vec(v1);
	return 0;
}*/
