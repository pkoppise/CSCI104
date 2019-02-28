#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
/*
// Returns '0' for '1' and '1' for '0'
char flip(char c)
{
	return (c == '0')? '1': '0';
}

// Print 1's and 2's complement of binary number represented by "bin"
void printOneAndTwosComplement(string bin)
{
    int n = bin.length();
    int i;

    string ones, twos;
    ones = twos = "";

    //  for ones complement flip every bit
    for (i = 0; i < n; i++)
        ones += flip(bin[i]);

    //for two's complement go from right to left in ones complement and if we get 1 make, we make
    //them 0 and keep going left when we get first 0, make that 1 and go out of loop
    twos = ones;
    for (i = n - 1; i >= 0; i--)
    {
        if (ones[i] == '1')
            twos[i] = '0';
        else
        {
            twos[i] = '1';
            break;
        }
    }


    // If No break : all are 1  as in 111  or  11111 in such case, add extra 1 at beginning
    if (i == -1)
        twos = '1' + twos;

    cout << "1's complement: " << ones << endl;
    cout << "2's complement: " << twos << endl;
}

string reverse(string actual, int len, int idx)
{
	if(len == idx)
	{
		return "";
	}
	else
	{
		string temp = reverse(actual, len, idx + 1);
	    return (temp + actual[idx]);
	}
}

string num2string(vector<int> integer)
{
	string t = "";
	string str = "";
	for(unsigned int i = 0; i < integer.size(); i++)
	{
		stringstream ss;
		ss << integer.at(i);
        ss >> t;
        str = str + t;
	}
	return str;
}

string dec2bin(int x)
{
    vector<int> buffer;
	while(x > 0)
    {
    	int tr = x % 2;
		buffer.push_back(tr);
    	x = x /2;
    }

	string temp = num2string(buffer);
	string bin  = reverse(temp, temp.size(), 0);
	return bin;
}

// Driver program
int main()
{
    int num = 17;
	string bin = dec2bin(num);
    cout << "Actual String:" << bin << endl;
    printOneAndTwosComplement(bin);
    return 0;
}*/
