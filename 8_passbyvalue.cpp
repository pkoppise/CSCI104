#include <iostream>
using namespace std;

void print(int area)
{
    cout << "Area is:" << area << endl;
}

int area(int w, int l) { 
	int ans = w * l;
	print(ans);
	return ans;
}


int main()
{
	int wid = 8, len = 5, a;
	a = area(wid,len);
}
