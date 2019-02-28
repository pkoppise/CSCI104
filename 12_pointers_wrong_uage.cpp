#include <iostream>
using namespace std;

int* area(int, int);
void area(int, int, int*);
void area(int, int, int&);


int main()
{
	//int wid = 8, len = 5, *a;
	int wid = 8, len = 5, a;
	//a = area(wid,len);
	//area(wid,len,&a);
    area(wid,len,a);
	//cout << *a << endl; //nothing here ans variable is died.
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
