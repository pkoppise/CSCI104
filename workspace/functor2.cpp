#include <string>
#include <iostream>
#include <vector>
#include <functional> // std::greater<T>
#include <numeric> // std::accumulate
using namespace std;

/*
ostream& operator<<(ostream& ostr, const vector<int>& v1)
{
   for(vector<int>::const_iterator it = v1.begin(); it != v1.end(); ++it){
      cout << *it << " ";
   }
   cout << endl;
   return ostr;
}

template <typename T, typename Comp>
T mymax(const T& a, const T& b, const Comp& c)
{
   if(c(a,b)) return a;
   return b;
}

struct SizeComp
{
	bool operator()(const vector<int>& a, const vector<int>& b) const {
		return (a.size() > b.size());
	}
};

struct SumComp
{
	bool operator()(const vector<int>& a, const vector<int>& b) const {
		int sum1 = std::accumulate(a.begin(), a.end(), 0);
        int sum2 = std::accumulate(b.begin(), b.end(), 0);
        return (sum1 > sum2);
      }
};

int main()
{
   int data1[] = {10, 20, 30};
   int data2[] = {1, 2, 3, 4, 5};
   vector<int> v1(data1, data1+3);
   vector<int> v2(data2, data2+5);

   cout << "max of 4.3 and 6.1 is " << mymax(4.3, 6.1, greater<double>()) << endl;
   cout << "max of v1 and v2 is "   << mymax<vector<int>, SizeComp>(v1, v2, SizeComp()) << endl;
   cout << "max of v1 and v2 is "   << mymax<vector<int>, SumComp>(v1, v2, SumComp()) << endl;
  return 0;
}*/
