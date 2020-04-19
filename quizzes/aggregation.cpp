//Aggregation has relationshipe
//Manager has group of workers under him(Workers come under Manager, but workers can stay indepenently)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Worker
{
private:
    string name;
public:
    Worker(string name):name(name) {}
    string getWorkerName() { return name; } 
};

class Manager
{
private:
    vector<Worker*> teamList;
public:
    Manager(vector<Worker*> teamList):teamList(teamList) {}
    void displayNames()
    {
        for(int i = 0; i < teamList.size(); i++)
        {
            cout << teamList[i]->getWorkerName() << endl;
        }
    }
};

int main()
{
    vector<Worker*> teamList;
    Worker *w1 = new Worker("Naveen");
    teamList.push_back(w1);
    Worker *w2 = new Worker("Harshal");
    teamList.push_back(w2);
    Worker *w3 = new Worker("Rahul");    
    teamList.push_back(w3);
    Manager *mang = new Manager(teamList);
    mang->displayNames();
    delete mang;
    delete w1;
    delete w2;
    delete w3;
    return 0;
}
