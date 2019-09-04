#include <iostream>
using namespace std;

class Command
{
public:
  enum Action { deposit, withdraw } action;
  int amount{0};
  bool success{false};

  Command(Action action, int amount): action(action), amount(amount) {}
};

class Account
{
public:
  int balance{0};
  void process(Command& cmd)
  {
	  switch(cmd.action)
	  {
	  case cmd.deposit:
	  	  balance += cmd.amount;
	      cout << "Deposit:" << cmd.amount << " Balance:" << balance << endl;
	  	  cmd.success = true;
	  	  break;
	  case cmd.withdraw:
	  	  if(balance - cmd.amount >= -500)
	  	  {
	  		  balance -= cmd.amount;
	  		  cout << "Withdraw:" << cmd.amount << " Balance:" << balance << endl;
	  	  	  cmd.success = true;
	  	  }
	  	  else
	  	  {
	  		  cmd.success = false;
	  	  }
	      break;
	  }

  }
};


/*
int main()
{
	Account account;

	Command cd(Command::deposit, 100);
	account.process(cd);

	Command cd2(Command::withdraw, 100);
	account.process(cd2);

	return 0;
}*/
