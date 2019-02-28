#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;
/*
int main()
{
	const string delims(" \t,.;");
	string line = "Welcome to my world";
	string str,str1;
	string::size_type beg, end;

	beg = line.find_first_not_of(delims);
	cout << beg << endl;
	end = line.find_first_of(delims,beg);
	cout << end << endl;
	str.assign(line,beg,end-beg+1);
    cout << str << endl;
    cout << str.length() << endl;

    beg = line.find_first_not_of(delims,end);
    end = line.find_first_of(delims,beg);
    cout << beg << " " << end << endl;
    str.assign(line,beg,end-beg+1);
    cout << str << endl;
    cout << str.length() << endl;    
}*/