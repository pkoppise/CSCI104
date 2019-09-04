#include <iostream>
#include <string>
#include <sstream>
#include <memory>
using namespace std;

class BankAccount
{
public:
  virtual ~BankAccount() = default;
  virtual void deposit(int amount) = 0;
  virtual void withdraw(int amount) = 0;
  virtual int get_balance() = 0;
};

class CurrentAccount : public BankAccount // checking
{

private:
  int balance;
public:
  CurrentAccount(const int balance) : balance(balance) {}

  void deposit(int amount) override
  {
    balance += amount;
  }

  void withdraw(int amount) override
  {
    if (amount <= balance) balance -= amount;
  }

  int get_balance() override
  {
    return balance;
  }
};

/*
int main()
{
	BankAccount *account = new CurrentAccount(123);
	account->deposit(100);
	cout << account->get_balance() << endl;

	shared_ptr<BankAccount> acc = make_shared<CurrentAccount>(123);
	BankAccount *otheraccount = acc.get(); //samrt pointer acts as an proxy, uses interface to access the resource nad behaves like original
	cout << otheraccount->get_balance() << endl;
}*/
