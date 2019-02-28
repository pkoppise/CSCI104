#include <iostream>
#include <thread>

using namespace std;
void thread_function()
{
	cout << "thread function\n";
}

int main()
{
    thread t(thread_function);   // t starts running
    cout << "main thread\n";
    t.join();   // main thread waits for the thread t to finish
    return 0;
}


