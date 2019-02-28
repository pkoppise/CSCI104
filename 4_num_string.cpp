#include<sstream>
#include<iostream>

using namespace std;


int main()
{
   int number = 12345;
   string strNumber;
   stringstream ss;

   ss << number;
   ss >> strNumber;

   cout << number << endl;
   cout << strNumber << endl;

   return 0;
}
