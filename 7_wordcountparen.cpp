#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
   ifstream ifile("C:\\CSCI104\\data.txt");
   string line;
   // read each line
   while (getline(ifile, line)) {
      // create stringstream from line
      int count = 0;
      stringstream  ss(line);
      // loop through storage with >>, counting words
      string temp;
      getline(ss,temp,'(');
      getline(ss,temp,')');
      cout << temp << endl;

      stringstream ss1(temp);
      string temp2;
      while(ss1 >> temp2)
      {
         count++;
      }
      //words that occurs between paranthesis
      cout << count << endl;
   }
}