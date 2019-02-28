#include <iostream>
#include<string>
using namespace std;


int main()
{
   int x=0;
   cout << "Enter X:";
   cin >> x;
   cout << x << "  " << cin.fail() << endl;

   int y = 0;
   cout << "Enter Y: ";
   cin >> y;
   cout << y << "  " << cin.fail() << endl;

   //suggested inputs are a)512 & 123 b)512 123 c)23abc
   //If option c is given cin.fail() is true in this case and use below two lines
   //Now z reads "abc"
   //If options a and b are given and no clear is used z returns empty string.

   cin.clear();
   cout << cin.fail() << endl;
   cin.ignore(100,'\n');
   cout << cin.fail() << endl;

   string z = "";
   cout << "Enter Z:";
   getline(cin,z);
   cout << z << " " << cin.fail() << endl;

   return 0;
}
