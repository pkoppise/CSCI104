#include <iostream>
#include <string>
using namespace std;

template<typename T>
struct Item {
   T val;
   Item<T> *next;
};

template<typename T>
class LListBasic {
   public:
   LListBasic() { head_ = NULL; size_ = 0; }
   ~LListBasic();
   bool empty() const { return size_ == 0; }
   int size() const   { return size_; }
   void prepend(const T& val);
   T& get(int loc);

   protected:
   Item<T> *head_;
   int size_;

};

template<typename T>
LListBasic<T>::~LListBasic()
{
   while(head_ != NULL){
      Item<T> *temp = head_->next;
      delete head_;
      head_ = temp;
   }
}

template<typename T>
void LListBasic<T>::prepend(const T& val)
{
   Item<T> *old_head = head_;
   head_ =  new Item<T>;
   head_->val = val;
   head_->next = old_head;
   size_++;
}

template<typename T>
T& LListBasic<T>::get(int loc)
{
   Item<T> *temp = head_;
   while(temp != NULL && loc != 0){
      temp = temp->next;
      loc--;
   }
   return temp->val;
}

template <typename T>
class LListEnhanced : public LListBasic<T>
{
   public:
   LListEnhanced();
   void pop_front();
   int find(const T& target);

};

template <typename T>
LListEnhanced<T>::LListEnhanced(): LListBasic<T>() { }

template <typename T>
void LListEnhanced<T>::pop_front()
{
      Item<T> *old_head = LListBasic<T>::head_->next;
      delete LListBasic<T>::head_;
      LListBasic<T>::head_ = old_head;
      LListBasic<T>::size_--;
}


template <typename T>
int LListEnhanced<T>::find(const T& target)
{
      // Yes this is an inefficient way of doing find (do you know why?)
      // but let's practice calling an inherited member function
      for(int i=0; i < LListBasic<T>::size(); i++){
         if(this->get(i) == target) {
            return i;
         }
      }
      return -1;
}


int main()
{
   const string s[] = {"Tommy", "Alex", "Demario", "Andrea"};
   LListEnhanced<string> LL;

   for(int i=3; i >= 0; i--){
     LL.prepend(s[i]);
   }

   for(int i=0; i <= 3; i++){
     cout << LL.get(i) << endl;
   }

   LL.pop_front();

   cout << "Now there are only " << LL.size() << " entries in the list" << endl;

   cout << "Demario exists at location " << LL.find("Demario") << endl;

   return 0;
}
