#include <iostream>
#include <vector>
using namespace std;

class Singleton
{
private:
    Singleton() {}
    ~Singleton() {}
    static Singleton* instance;
    static int counter;
    vector<int> a;
public:
    static Singleton* getInstance();
    static void releaseInstance();
    
    void insert(const int& value)
    {
        a.push_back(value);
    }
    void print_vec()
    {
        for(int val: a)
            cout << val << " ";
        cout << endl;
    }
    
    static int getNumberOfUsers()
    {
        return counter;
    }
};

Singleton* Singleton::getInstance()
{
    if(instance == NULL)
    {
        instance = new Singleton;
    }
    ++counter;
    return instance;
}

void Singleton::releaseInstance()
{
    --counter;
    if(counter == 0 && (instance != NULL))
    {
        delete instance;
        instance = NULL;
    }
}


Singleton* Singleton::instance = NULL;
int Singleton::counter = 0;


int main()
{
    
    Singleton* ptr1 = Singleton::getInstance();
    ptr1->insert(2);

    
    Singleton* ptr2 = Singleton::getInstance();
    ptr2->insert(3);
    
    cout << Singleton::getNumberOfUsers() << endl;
    
    ptr1->print_vec();
    
    ptr1->releaseInstance();
    ptr1 = NULL;
    
    cout << Singleton::getNumberOfUsers() << endl;
    ptr2->print_vec();
    return 0;
}


