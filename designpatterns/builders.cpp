#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string output;
	output = "<p>";
	output += "hello";
	output += "</p>";
	cout << output << endl;

    string words[] = {"Hello", "World"};
    ostringstream oss;
    oss << "<ul>" << endl;
    for(auto i : words)
    	oss << "\t" << "<li>" << i << "</li>" << endl;
    oss << "</ul>";
    cout << oss.str() << endl;
    return 0;
}