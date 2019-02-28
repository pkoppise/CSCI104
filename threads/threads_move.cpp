#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <cassert>

int main()
{
	// vector container stores threads
	std::vector<std::thread> workers;
	for (int i = 0; i < 5; i++) {
		auto t = std::thread([i]()
		{
			std::cout << "thread function: " << i << "\n";
		});
		workers.push_back(std::move(t));
	}
	std::cout << "main thread\n";

	// Looping every thread via for_each
	// The 3rd argument assigns a task
	// It tells the compiler we're using lambda ([])
	// The lambda function takes its argument as a reference to a thread, t
	// Then, joins one by one, and this works like barrier
	std::for_each(workers.begin(), workers.end(), [](std::thread &t)
	{
		assert(t.joinable());
		t.join();
	});

	return 0;
}