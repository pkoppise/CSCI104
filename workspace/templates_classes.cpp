#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
      T1 first;
      T2 second;
public:
      Pair(const T1& f, const T2& s);
      T1 getFirst() const;
      T2 getSecond() const;
};


template <typename T1, typename T2>
Pair<T1,T2>::Pair(const T1& f, const T2& s)
{
  first = f;
  second = s;
}

template <typename T1, typename T2>
T1 Pair<T1,T2>::getFirst() const 
{
  return first;
}

template <typename T1, typename T2>
T2 Pair<T1,T2>::getSecond() const
{
  return second;
}

int main()
{
  //const int& x = 20;
  //cout << x << endl;

  Pair<char, double> p1('a', 3.1);

  Pair<string, int> p2(string("hi"), 4);

   cout << p1.getFirst() << "," << p1.getSecond() << endl;
   cout << p2.getFirst() << "," << p2.getSecond() << endl;

   return 0;
}
