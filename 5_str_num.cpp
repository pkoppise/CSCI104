#include<sstream>
#include<iostream>
#include<string>
using namespace std;


int main()
{
    string numStr = "56789";
    int num;
    
    stringstream ss;
    
    ss << numStr;
    ss >> num;

    cout << numStr << endl;
    cout << num << endl;

    ss.clear();

    return 0;
}
