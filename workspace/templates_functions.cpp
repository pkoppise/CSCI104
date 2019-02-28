#include<iostream>
using namespace std;

template<typename T1, typename T2>
T2 maximum(const T1& a, const T2& b) 
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
    cout << maximum<int,double>(2,3.5) << endl;
    cout << maximum<double,double>(2.5,3.5) << endl;
    //cout << maximum<double,int>(2.5,1) << endl;
	return 0;
}
