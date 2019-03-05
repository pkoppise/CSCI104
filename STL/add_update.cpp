#include <iostream>
#include <map>
#include <string>

using namespace std;

int main ()
{
	typedef map<string, int> mapType;
	mapType myMap;
	myMap.insert(mapType::value_type("First", 1)); // add

	for (auto it: myMap) 
		std::cout << it.first << ": " << it.second << std::endl;

	myMap["First"] = 101; // update

	for (auto it: myMap) 
		std::cout << it.first << ": " << it.second << std::endl;

	return 0;
}
