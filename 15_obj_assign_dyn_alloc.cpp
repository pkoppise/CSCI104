#include <iostream>
#include <cstring>
using namespace std;

enum {CS, CECS };
struct student {
    char name[80];
    int id;
    int major;
};


int main(int argc, char *argv[])
{
    student s1;
    strncpy(s1.name,"Bill",80);
    s1.id = 5; 
    s1.major = CS;
    cout << s1.name << endl;
    cout << s1.id << endl;
    cout << s1.major << endl;

    student s2 = s1; // element by element copy
    cout << s2.name << endl;
    cout << s2.id << endl;
    cout << s2.major << endl;    
    return 0;
}
