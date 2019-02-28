#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	
    vector<thread> workers;
	for(int i = 0; i < 5; i++)
	{
		workers.push_back(thread([i]()
		{
			cout << "thread function" << i << endl;
		}));
	}
	
	/*thread t([]()
	{
		cout << "thread_function" << endl;
	}
	);*/

    cout << "main thread\n";
	
	for_each(workers.begin(), workers.end(),[](thread &t)
	{
		t.join();
	});
    return 0;
}


