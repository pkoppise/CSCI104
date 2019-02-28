#include <iostream>
#include <thread>
#include <string>

using namespace std;

void func_1(string& str)
{
	cout << "thread" << str << endl;
	
}

int main()
{
	string x = "Learning Thread";
	thread t(func_1,ref(x)); 	//move(x) can also be used
    try
	{
		cout << "from main:" << x << endl; 
	}		
	catch (...)
	{
		t.join();
		throw;
	}
	
	t.join();
    return 0;
}