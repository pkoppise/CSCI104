#include <iostream>
#include <string>
using namespace std;

class SwipeCard;

class Manager
{
public:
    void Logon(SwipeCard* card);
    string getManagerName()
    {
        return "PHANI";
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
    delete mang;
    delete sc;
    return 0;
}
