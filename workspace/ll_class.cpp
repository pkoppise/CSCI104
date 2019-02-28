#include <iostream>
using namespace std;
/*
struct Item {
   int val;
   Item *next;
};

class LListBasic {
   public:
   LListBasic() { head_ = NULL; size_ = 0; }
   ~LListBasic();
   bool empty() const { return size_ == 0; }
   int size() const   { return size_; }
   void prepend(const int& val);
   int& get(int loc);

   private:
   Item *head_;
   int size_;

};

LListBasic::~LListBasic()
{
   while(head_ != NULL){
      Item *temp = head_->next;
      delete head_;
      head_ = temp;
   }
}

void LListBasic::prepend(const int& val)
{
   Item *old_head = head_;
   head_ =  new Item;
   head_->val = val;
   head_->next = old_head;
   size_++;
}


int& LListBasic::get(int loc)
{
   Item *temp = head_;
   while(temp != NULL && loc != 0){
      temp = temp->next;
      loc--;
   }
   return temp->val;
}

int main()
{
   LListBasic LL;
   for(int i=9; i >= 0; i--){
      LL.prepend(i);
   }
   cout << "Size is " << LL.size() << endl;
   for(int i=0; i <= 9; i++){
      cout << LL.get(i) << endl;
   }
   return 0;
}*/
