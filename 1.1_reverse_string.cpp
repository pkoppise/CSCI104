#include <iostream>
#include <string>
using namespace std;


string reverseString(string actual, int len, int index)
{
	if(len == index) { return ""; }
	string temp = reverseString(actual,len,index+1);
    return temp + actual[index];
}

void swap(char& a, char &b)
{
   char temp = a;
   a = b;
   b = temp;
}

void ReverseString(string& actual)
{
	int n = actual.size();
	for(int i = 0; i < n/2; i++)
	{
		swap(actual[i], actual[n - i - 1]);
	}
}

bool compareHelper(string& str1, string& str2, int len, int index)
{
	if(len == index)
	{
		return true;
	}
	else
	{
		if(str1[index] == str2[index])
		{
			bool temp = compareHelper(str1, str2, len, index + 1);
			cout << "Entering here" << endl;
			return temp;
		}
		else
		{
			return false;
		}
	}
}

bool stringComparison(string& str1, string& str2)
{
	int len1 = str1.length();
	int len2 = str2.length();
	if(len1 != len2)
	{
		cout << "Strings are not equal" << endl;
		return false;
	}
	else
	{
		bool result = compareHelper(str1, str2, len1,0);
		if(result)
		{
			cout << "Strings are equal" << endl;
		}
		else
		{
			cout << "strings are not equal" << endl;
		}
		return result;
	}
}


int main()
{
    string str = "Hello";
    cout << "Actual array:" << str << endl;
    cout << "Reverse Array:" << reverseString(str,5,0) << endl;
    string strrev = "Hello";
    stringComparison(str,strrev);
    return 0;
}


