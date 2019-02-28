#include <iostream>
using namespace std;


int* area(int, int);


int main()
{
    int wid = 8, len = 5, *a;
    a = area(wid,len); // memory leak happens if return pointer is not stored or it's an orphan
    cout << *a << endl;
    delete a;
    return 0;
}


int* area(int w, int l)
{
    int* ans = new int;
    *ans = w * l;
    return ans;
}
