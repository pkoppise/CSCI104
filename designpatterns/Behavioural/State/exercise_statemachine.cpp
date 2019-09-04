#include <iostream>
#include <vector>
#include <string>
#include <boost/lexical_cast.hpp>
using namespace std;

class CombinationLock
{
    vector<int> combination;
public:
    string status;

    CombinationLock(const vector<int> &combination) : combination(combination) {
    	status = "LOCKED";
    	cout << "Lock is Locked" << endl;
    }

    void enter_digit(int digit)
    {
    	string str_digit = boost::lexical_cast<string>(digit);
    	string combi = "";
    	for(auto i : combination)
    	{
    		combi = combi + boost::lexical_cast<string>(i);
    	}
    	if(status == "OPEN")
    	{
    		cout << "Lock is already opened" << endl;
    	}
    	if((str_digit == combi) && (status == "LOCKED"))
    	{
    		status = "OPEN";
    		cout << "Lock is opened" << endl;
    	}
    	else
    	{
    		status = "ERROR";
    		cout << "Invalid Combination" << endl;
    	}
    }
};

/*
int main()
{
	vector<int> combo{1,2,3,4,5};
	CombinationLock lock(combo);
	lock.enter_digit(12345);
	return 0;
}*/
