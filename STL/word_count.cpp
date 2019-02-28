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
	map<string,int> words;
	string line, str;

	ifstream myFile("stairwaytoheaven.txt", ios_base::in);
	while (getline(myFile,line)) {
		string::size_type beg, end;
		beg = line.find_first_not_of(delims);
		while (beg != string::npos) 
		{
			end = line.find_first_of(delims,beg);
			if(end == string::npos) 
			{
				end = line.length();
			}
			str.assign(line,beg,end-beg+1);
            //cout << str << endl;
			++words[str]; 
			beg = line.find_first_not_of(delims,end);
		}
	}

	//typedef map<string,int>::const_iterator iter;
	for(auto p = words.begin(); p != words.end(); ++p)
		cout << p->first << ":" << p->second << endl;

	myFile.close();
	return 0;
}*/