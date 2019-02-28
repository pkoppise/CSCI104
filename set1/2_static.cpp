#include<iostream>
using namespace std;

/*
class GfG
{
   public:
     static int i;

   public:
     GfG()
     {
        // Do nothing
     };
     static void printMsg()
     {
         cout<<"Welcome to GfG!" << endl;
     }
};

int GfG::i = 10;

int main()
{
	cout << GfG::i << endl;
	GfG::printMsg();

    GfG obj1;
    GfG obj2;

    //obj1.i =2; ----->compile error
    //obj2.i = 3;

    cout << obj1.i<<" "<<obj2.i << endl;
    cout << GfG::i << endl;

    obj1.printMsg();
    obj2.printMsg();
    GfG::printMsg();
}*/

/*
class Player
{
private:
    int id;
    static int next_id;
public:
    int getID() { return id; }
    Player()  {  id = next_id++; }
};
int Player::next_id = 1;

int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID();
  return 0;
}*/

/*
class A
{
private:
    int x;
public:
    A(int _x)  {  x = _x; }
    int get()  { return x; }
};

class B
{
    static A a;
public:
   static int get()
   {  return a.get(); }
};

A B::a(0);

int main(void)
{
    B b;
    cout << b.get();
    return 0;
}*/
