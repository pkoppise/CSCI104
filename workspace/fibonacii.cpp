//Fibonacci Series using Dynamic Programming
#include<stdio.h>
#include<iostream>

using namespace std;

/*
int* fib(int n)
{
	int *ptr = new int[n+2];
	int i;

	//0th and 1st number of the series are 0 and 1
	ptr[0] = 0;
	ptr[1] = 1;

	for (i = 2; i <= n; i++)
	{
		//Add the previous 2 numbers in the series and store it
		ptr[i] = ptr[i-1] + ptr[i-2];
	}

	return ptr;
}

int main ()
{
	int n = 9;
	int *ret = fib(n);

	for(int i = 0; i <= n; i++)
	{
		cout << ret[i] << " ";
	}
	cout << endl;
	return 0;
}*/
