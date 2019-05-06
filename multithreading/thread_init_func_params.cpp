#include <iostream>
#include <thread>
#include <string>

using namespace std;

void printSomeValues(int val, string str, double dval)
{
	cout << val << " " << str <<" " << dval << endl;
}

class myFunctorParam
{
public:
	void operator()(int* arr, int length)
	{
		cout << "An array of length " << length << " is passed to thread" << endl;
		for (int i = 0; i != length; ++i)
			cout << arr[i] << " ";
		cout << endl;
	}
    void changeSign(int* arr, int length)
    {
	    cout << "An arrray of length " << length << " is passed to thread" << endl;
	    for (int i = 0; i != length; ++i)
		    cout << arr[i] << " ";
		cout << endl;
	    cout << "Changing sign of all elements of initial array" << endl;
	    for (int i = 0; i != length; ++i)
	    {
		    arr[i] *= -1;
		    cout << arr[i] << " ";
	    }
}	
};

int main()
{
    thread t1(printSomeValues,5,"Hello",3.5);
    if(t1.joinable())
    {
        t1.join();
    }
    
    myFunctorParam param;
    int arr[5] = { 1, 3, 5, 7, 9 };
    thread t2(param,arr,5);
    if(t2.joinable())
    {
        t2.join();
    }    
    
    int arr2[5] = { -1, 3, 5, -7, 0 };
    thread t3(&myFunctorParam::changeSign, param, arr2, 5);
    if(t3.joinable())
    {
        t3.join();
    } 
    
    return 0;
}