#include <iostream>
using namespace std;

int* area(int, int);
void area(int, int, int*);
void area(int, int, int&);


int main()
{
    int wid = 8, len = 5, a;
    //int *ptr = area(wid,len);
    //cout << *ptr << endl; //nothing here ans variable is died.
	
    area(wid,len,&a);
    cout << a << endl;
	
    wid = 10; len = 6;
    area(wid,len,a);
    cout << a << endl;	
}

/*
int* area(int w, int l)
{
	int ans = w * l;
	return &ans;
}*/



void area(int w, int l,int* p)
{
	*p = w * l;
}

void area(int w, int l, int& p)
{
	p = w * l;
}
