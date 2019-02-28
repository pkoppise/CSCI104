#include <vector>
#include <iostream>
using namespace std;
/*
vector<int> merge(vector<int>& input,
                  int s1, int e1, int s2, int e2)
{
  vector<int> result;
  while(s1 < e1 && s2 < e2)
  {
	  if(input[s1] < input[s2])
	  {
		  result.push_back(input[s1]);
		  s1++;
	  }
	  else
	  {
		  result.push_back(input[s2]);
		  s2++;
	  }
  }

  while(s2 < e2)
  {
	  result.push_back(input[s2++]);
  }
  while(s1 < e1)
  {
	  result.push_back(input[s1++]);
  }

  return result;
}

void print_vec(vector<int> input)
{
  for(vector<int>::iterator it = input.begin(); it != input.end(); ++it)
  {
      cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  int d1[] = {2,9,10,16,3,4,5,6};
  vector<int> v1(d1, d1+8);
  print_vec( merge(v1,0,4,4,8)); //s1 index be careful

  int d2[] = {1,2,3,4,7,8,5,6};
  vector<int> v2(d2, d2+8);
  print_vec( merge(v2,4,6,6,8));

  //vector<int> v3;
  //print_vec( merge(v3,0,0,0,0) );

  return 0;
}*/
