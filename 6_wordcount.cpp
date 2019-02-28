#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


int main() {
   string word;
   int cnt = 0;
   ifstream ifile("C:\\CSCI104\\data.txt");
   while(ifile >> word) {
      cnt++;
   }
   // print word count
   cout <<  cnt  << endl;
   ifile.close();
   
   ifile.open("C:\\CSCI104\\data.txt");
   string line;
   while(getline(ifile,line)) {
   	    stringstream ss(line);
   	    string temp;
   	    int cnt = 0;
   	    while(ss >> temp) {
   	    	cnt++;
   	    }
   	    // word count per line
   	    cout << cnt << endl;
   }
   ifile.close();
   return 0;
}


/*
1) Where data is coming from file stream or console or string stream (ifstream, cin, stringstream)
2) Data limit (limit for loop, no limit while loop)
3) Delimiters (yes --getline , no -- cin >> )
4) Type od data (text -> getline , numbers --> cin >> )
*/

