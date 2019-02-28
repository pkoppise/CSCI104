#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> gvector)
{
	for(unsigned int i=0; i < gvector.size(); i++)
    {
        //cout << gvector[i] << endl;
        cout << gvector.at(i) << endl;
    }
    cout << "-----------------" << endl;
}


int main ()
{
	vector<int> vec0;  //no size  
    cout << "The default size is:" << vec0.size() << endl;

	vector<int> vec1(5); //size 5 with default value is 0 
	printVector(vec1);

	vector<int> vec2(5,10); //size 5 with default value is 10
	printVector(vec2);

    for(unsigned int i=0; i < vec1.size(); i++) //assigning
    {
        vec1[i]= i+51;
    }
    printVector(vec1);

    vector<int> vec3(vec1.begin(),vec1.end()); //iterating through vec1
    printVector(vec3);

    vector<int> vec4(vec2); //copying vec2
    printVector(vec4);


    int myInt[] = {1,2,3}; // construct from arrays:
    vector<int> vec5(myInt, myInt + sizeof(myInt) / sizeof(int) );
    printVector(vec5);
}