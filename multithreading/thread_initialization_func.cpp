#include <iostream>
#include <thread> 
#include <unistd.h> 

using namespace std;

void threadFunc()
{
	sleep(5);
	cout << "Welcome to Multithreading" << endl;
}

int main()
{
	//pass a function to thread
	cout << "Main Function 1" << endl;
	thread funcTest1(threadFunc);
	cout << "Main Function 2" << endl;
	cout << bool(funcTest1.joinable()) << endl;
	//funcTest1.detach();
	if(funcTest1.joinable())
	{
	    cout << "Thread is joinable" << endl;
	    funcTest1.join(); //do not call join() after detach() error comes
	}
	else
	{
	    cout << "Thread is non-joined or detached" << endl;
	}
	cout << "Main Function 3" << endl;
}

