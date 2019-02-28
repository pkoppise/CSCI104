#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void printVector(vector<T> gvector)
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
    cout << "using size and defualt" << endl; 
    printVector<int>(vec1);

    vector<int> vec2(5,10); //size 5 with default value is 10
    cout << "using size and value 10" << endl;
    printVector<int>(vec2);

    for(unsigned int i=0; i < vec1.size(); i++) //assigning
    {
        vec1[i]= i+51;
    }
    cout << "using assigning" << endl;
    printVector<int>(vec1);

    vector<int> vec3(vec1.begin(),vec1.end()); //iterating through vec1
    cout << "using iterator" << endl;
    printVector<int>(vec3);

    vector<int> vec4(vec2); //copying vec2
    cout << "using copying" << endl;
    printVector<int>(vec4);


    int myInt[] = {1,2,3}; // construct from arrays:
    vector<int> vec5(myInt, myInt + 3);
    cout << "using array initialization" << endl;
    printVector<int>(vec5);

    vector<string> Scientist;

    Scientist.push_back("James Maxwell");
    cout << Scientist.capacity() << endl; //1 -1
    Scientist.push_back("Edwin Hubble");
    cout << Scientist.capacity() << endl; //2 - 2
    Scientist.push_back("Charles Augustin de Coulomb");
    cout << Scientist.capacity() << endl; //4 - 3
    Scientist.push_back("Louis Pasteur");
    cout << Scientist.capacity() << endl; //4 - 4

    cout << "---------------" << endl;

    cout << "Now, we have " << Scientist.size() << " scientists.\n";
    Scientist.pop_back();
    cout << "Now, we have " << Scientist.size() << " scientists.\n";

    Scientist.insert(Scientist.begin(),"Leonardo da Vinci");
    cout << Scientist.capacity() << endl; //4 -4
    Scientist.insert(Scientist.begin() + 2,"Phanendra"); 
    cout << Scientist.capacity() << endl; //8 - 5

    vector<string>::iterator iter; 
    for (iter = Scientist.begin(); iter != Scientist.end(); ++iter)
        cout << *iter << endl;

    cout << "-------------------" << endl;

    Scientist.erase(Scientist.begin() + 2); // 4 - 4 
    Scientist.push_back("Ravi"); //8 -5
    cout << Scientist.capacity() << endl;
    Scientist.push_back("Sukesh");
    Scientist.push_back("Suresh");
    Scientist.push_back("Chiru"); //8 -8
    cout << Scientist.capacity() << endl;
    Scientist.push_back("Hello");
    cout << Scientist.capacity() << endl; //16 - 9

    vector<string>::iterator iter1; 
    for (iter1 = Scientist.begin(); iter1 != Scientist.end(); ++iter1)
        cout << *iter1 << endl; 

    cout << "---------" << endl;

    cout << Scientist.capacity() << endl;
    cout << Scientist.size() << endl;

    Scientist.erase(Scientist.begin() + 2, Scientist.begin() + 5);
    cout << Scientist.size() << endl;

    vector<string> a(3,"Hello2");
    Scientist.insert(Scientist.begin() + 2, begin(a), end(a));
    cout << "After inerting range of elements:" << endl;
    printVector<string>(Scientist);
    cout << Scientist.size() << endl;

    if(find(Scientist.begin(), Scientist.end(),"Suresh") != Scientist.end())
    {
        cout << "Suresh found " << endl;
    }
    else
    {
        cout << "Suresh not found" << endl;
    }

    Scientist.clear();
    if(Scientist.empty()) 
        cout << "Nothing in the list\n";
    else
        cout << "You have something in the list\n";

    //According to Scott Meyers, the following code requires 2-18 reallocations:

    //vector<int> v;
    //for(int i = 0; i < 1000; ++i)
    //  v.push_back(i);
    //So, he suggested we should use resever() to reduce the costs:

    //vector<int> v;
    //v.reserve(1000);
    //for(int i = 0; i < 1000; ++i) v.push_back(i);

    return 0;    
}