#include <iostream>
using namespace std;

struct Person{
	char name[20];
	int age;
};

class CPerson{
public:  //By default all the attributes are private in class and public in struct
	char c_name[20];
	int c_age;
};


int main() {
	// Anyone can modify b/c members are public by default
	Person p1;
	p1.age = 34;// probably not correct
	cout << "Age P1:" << p1.age << endl;

	// No one can access b/c members are private by default
	//If explicitly made public then struct and class are same
	CPerson p2;
	p2.c_age = 20;
	cout << "Age P2:" << p2.c_age << endl;

    CPerson p3;
    p3 = p2;
    cout << "Age P3:" << p3.c_age << endl;

    return 0;
}



