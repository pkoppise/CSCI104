#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	vector<int> nums;
	ifstream ifile("C:\\CSCI104\\data.txt");
	int x;

    
	/*while( !ifile.fail() ) {
		ifile >> x;
		nums.push_back(x);
	}

    
	while(1) {
		ifile >> x;
		if(ifile.fail()) break;
		nums.push_back(x);
	}*/


	// Extraction and check together
	while(ifile >> x) {
		nums.push_back(x);
	}

	//cout << nums[0] << endl; 
	//cout << nums[1] << endl;
	//cout << nums[2] << endl;
    vector<int>::iterator it;
    for(it = nums.begin(); it != nums.end(); ++it)
    {
    	cout << *it << endl;
    }

    ifile.close();

	/*3 steps sequence is 
	a) Extarct from stream / file
	b) Check for failure
	c) Do the operation*/
    ofstream ofile("C:\\CSCI104\\data2.txt");
    ofile << "Hello Morning" << endl;
    ofile << " 7 8 9" << endl;
    ofile.close();

    return 0;
}
