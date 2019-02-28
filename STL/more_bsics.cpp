#include <vector>
#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	vector<string> Scientist;

	Scientist.push_back("James Maxwell");
	cout << Scientist.capacity() << endl; //1 -1
	Scientist.push_back("Edwin Hubble");
	cout << Scientist.capacity() << endl; //2 - 2
	Scientist.push_back("Charles Augustin de Coulomb");
	cout << Scientist.capacity() << endl; //4 - 3
	Scientist.push_back("Louis Pasteur");
	cout << Scientist.capacity() << endl; //4 - 4

	cout << "Now, we have " << Scientist.size() << " scientists.\n";
	Scientist.pop_back();
	cout << "Now, we have " << Scientist.size() << " scientists.\n";

	Scientist.insert(Scientist.begin(),"Leonardo da Vinci");
	cout << Scientist.capacity() << endl; //4 -4
	Scientist.insert(Scientist.begin() + 2,"Phanendra"); 
	cout << Scientist.capacity() << endl; //8 - 5

	vector<string>::iterator iter; 
	for (iter = Scientist.begin(); iter != Scientist.end(); ++iter)
		cout << *iter << endl;

	cout << "-------------------" << endl;

	Scientist.erase(Scientist.begin() + 2); // 4 - 4 
	Scientist.push_back("Ravi"); //8 -5
	cout << Scientist.capacity() << endl;
	Scientist.push_back("Sukesh");
	Scientist.push_back("Suresh");
	Scientist.push_back("Chiru"); //8 -8
	cout << Scientist.capacity() << endl;
	Scientist.push_back("Hello");
	cout << Scientist.capacity() << endl; //16 - 9

	vector<string>::iterator iter1; 
	for (iter1 = Scientist.begin(); iter1 != Scientist.end(); ++iter1)
		cout << *iter1 << endl;	

	cout << "---------" << endl;

	cout << Scientist.capacity() << endl;
	cout << Scientist.size() << endl;

	Scientist.clear();
	if(Scientist.empty()) 
		cout << "Nothing in the list\n";
	else
		cout << "You have something in the list\n";*/

	//According to Scott Meyers, the following code requires 2-18 reallocations:

	//vector<int> v;
	//for(int i = 0; i < 1000; ++i)
	//	v.push_back(i);
    //So, he suggested we should use resever() to reduce the costs:

	//vector<int> v;
	//v.reserve(1000);
	//for(int i = 0; i < 1000; ++i) v.push_back(i);

	//return 0;
//}
