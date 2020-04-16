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

class SwipeCard;

class Manager
{
private:
    vector<Worker> teamList;
public:
    void Logon(SwipeCard* card);
    string getManagerName()
    {
        return "PHANI";
    }
    void createTeam()
    {
        Worker w1("Naveen");
        teamList.push_back(w1);
        Worker w2("Harshal");
        teamList.push_back(w2);
        Worker w3("Rahul");
        teamList.push_back(w3);
    }
    vector<string> getNames()
    {
        vector<string> wnames;
        for(int i = 0; i < teamList.size(); i++)
        {
            wnames.push_back(teamList[i].getWorkerName());
        }
        return wnames;
    }
};

class SwipeCard
{
public:
    void Swipe(Manager* manager) { cout << manager->getManagerName() << " has swiped ID card" << endl;}
};

void Manager::Logon(SwipeCard* card)
{
    card->Swipe(this);
}

int main()
{
    Manager *mang = new Manager;
    SwipeCard *sc = new SwipeCard;
    mang->Logon(sc);
    mang->createTeam();
    vector<string> names = mang->getNames();
    std::cout << "His Team members are" << endl;
    for(int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }
    
    delete mang;
    delete sc;
    return 0;
}
