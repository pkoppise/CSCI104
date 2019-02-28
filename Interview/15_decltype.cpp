#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto sum(T1 x, T2 y) -> decltype(x + y)
{
	return (x + y);
}

int main()
{
	cout << sum<int,double>(1,1.8) << endl;
	cout << sum<double,int>(1.8,1) << endl;
	return 0;
}