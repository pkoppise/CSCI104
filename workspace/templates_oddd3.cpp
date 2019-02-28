#include <iostream>
#include <vector>
#include <string>
using namespace std;


template<typename K, typename V>
class SlowMap {
public:

   // Notice we can nest types that are specifically for the primary class
   //  inside of the class definition.  When we do this, the nested type
   //  can freely use the template types without specifying:
   //  'template <typename K, typename V>'
   struct MapPair {
     K key;
     V val;
     MapPair(const K& k, const V& v) : key(k), val(v) { }
   };


  SlowMap() { }
  void insert(const K& k, const V& v);
  MapPair* get(const K& k);

private:
  // searches the vector and returns the index where that key exists
  // or -1 if it does not exist
  int find(const K& key) const;
  std::vector< MapPair > storage_;

};

template <typename K, typename V>
int SlowMap<K,V>::find(const K& value) const
{
	for(unsigned int i = 0; i < storage_.size(); ++i)
	{
		if(storage_[i].key == value)
		{
			return i;
		}
	}
	return -1;
}

template <typename K, typename V>
void SlowMap<K,V>::insert(const K& k, const V& v)
{
  MapPair p(k,v);
  int idx = find(k);
  if(idx == -1){
    storage_.push_back(p);
  }
  else {
    storage_[idx] = p;
  }
}

template <typename K, typename V>
typename SlowMap<K,V>::MapPair* SlowMap<K,V>::get(const K& k)
{
  int idx = find(k);
  if(idx != -1){
    return &storage_[idx];
  }
  return NULL;

}

int main()
{

  SlowMap<int,string> m1;
  SlowMap<int,string>::MapPair* ptr;
  string s = "Hi";
  m1.insert(5, s);
  s = "Bye";
  m1.insert(6, s);

  ptr = m1.get(5);
  if(ptr != NULL){
    cout << ptr->key << " " << ptr->val << endl;
  }
  else {
    cout << "5 does not exist in the map" << endl;
  }

  s = "Hello";
  m1.insert(5, s);
  ptr = m1.get(5);
  if(ptr != NULL){
    cout << ptr->key << " " << ptr->val << endl;
  }
  else {
    cout << "5 does not exist in the map" << endl;
  }

  return 0;
}
