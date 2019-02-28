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
	cout << this_thread::get_id() << endl;
	
	string x = "Learning Thread";
	thread t(func_1,ref(x));
	cout << t.get_id() << endl; 
	
	thread t2 = move(t);//thread cannot be copied but only moved
	cout << t2.get_id() << endl;

    cout << "MAIN" << x << endl;
	
	cout << thread::hardware_concurrency() << endl;
	
	t2.join();
    return 0;
}