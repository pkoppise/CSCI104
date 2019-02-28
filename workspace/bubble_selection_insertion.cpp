#include <iostream>
#include <vector>
using namespace std;

/*
void swapit(int &p, int &q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}

void printlist(vector<int> &b)
{
    vector<int>::iterator iter;
    for(iter = b.begin(); iter != b.end(); ++iter)
    {
    	cout << *iter << " ";
    }
    cout << endl;
}

void bsort(vector<int> &mylist)
{   int i, j;
    for(i=mylist.size()-1; i > 0; i--)
	{
    	for(j=0; j < i; j++)
		{
		    if(mylist[j] > mylist[j+1])
			{
		    	swapit(mylist[j],mylist[j + 1]);
			}
		}
    	printlist(mylist);
	}
}

void ssort(vector<int> &mylist)
{
	for(unsigned int i=0; i < mylist.size()-1; i++)
	{
		int min = i;
	    for(unsigned int j=i+1; j < mylist.size(); j++)
		{
	    	if(mylist[j] < mylist[min])
			{
	            min = j;
	        }
		}
	    swapit(mylist[i], mylist[min]);
	    printlist(mylist);
	}

}

void isort(vector<int> &mylist)
{
    int hole;
	for(unsigned int i=1; i < mylist.size(); i++)
	{
	    int val = mylist[i];
        hole = i;
        while(hole > 0 && val < mylist[hole-1])
        {
            mylist[hole] = mylist[hole-1];
            hole--;
        }
        mylist[hole] = val;
        printlist(mylist);
	}
}

int main()
{
	vector<int> a;
	a.push_back(7);
	a.push_back(3);
	a.push_back(8);
	a.push_back(6);
	a.push_back(5);
	a.push_back(1);

	//bsort(a);
	//ssort(a);
	//isort(a);
}*/
