#include <iostream>
#include <vector>
using namespace std;

class BankAccount
{
private:
	int balance;
	int overdraft_limit;
public:
	BankAccount(): balance(0), overdraft_limit(-500) {}
	void deposit(int amount)
	{
		this->balance += amount;
		cout << "Deposited Amount:" << amount<< " Balance Amount: " << this->balance << endl;
	}

	bool withdraw(int amount)
	{
		if(this->balance-amount >= overdraft_limit)
		{
			this->balance -= amount;
			cout << "Withdrawn Amount:" << amount<< " Balance Amount: " << this->balance << endl;
			return true;
		}
		else
		{
			cout << "Cannot draw as balance exceeded  with draw limit" << endl;
			return false;
		}
	}
};

class Command
{
public:
	virtual void call() = 0;
	virtual void undo() = 0;
	virtual ~Command() {}
};


class BankAccountCommand: public Command {
public:
	BankAccount& bank_account;
	enum Actions
	{
		deposit,
		withdraw
	} action;
	int amount;
	bool succeed;
public:
	BankAccountCommand(BankAccount& ba, Actions action, int amount): bank_account(ba), action(action), amount(amount)
	{
		succeed = false;
	}
	void call() {
		switch(action)
		{
		case deposit:
			bank_account.deposit(amount);
			succeed = true;
			break;
		case withdraw:
			succeed = bank_account.withdraw(amount);
			break;
		default:
			break;
		}
	}

	void undo() {
		if(!succeed) return;
		switch(action)
		{
		case withdraw:
			bank_account.deposit(amount);
			break;
		case deposit:
			bank_account.withdraw(amount);
			break;
		}
	}
};

class CompositeBankAccountCommand: public vector<BankAccountCommand>, Command
{
public:
	CompositeBankAccountCommand(const initializer_list<value_type>& items): vector<BankAccountCommand>(items) {}
	virtual void call() override
	{
		for (auto& cmd : *this)
		{
		    cmd.call();
		}
	}

	virtual void undo() override
	{
		for(auto it = rbegin(); it != rend(); ++it)
		{
			it->undo();
		}
	}
};

class DependentCompositeCommand: public CompositeBankAccountCommand
{
public:
	DependentCompositeCommand(const initializer_list<value_type>& items): CompositeBankAccountCommand(items) {}
	virtual void call() override
	{
	    bool ok = true;
	    for (auto& cmd : *this)
	    {
	      if (ok)
	      {
	        cmd.call();
	        ok = cmd.succeed;
	      }
	      else
	      {
	        cmd.succeed = false;
	      }
	    }
	}
};


class MoneyTransferCommand: public DependentCompositeCommand
{
public:
	MoneyTransferCommand(BankAccount& from, BankAccount& to, int amount):
		DependentCompositeCommand(
		    {
				BankAccountCommand{from, BankAccountCommand::withdraw, amount},
				BankAccountCommand{to, BankAccountCommand::deposit, amount},
			}
	     ) {}
};

/*
int main()
{
	BankAccount ba;
	vector<BankAccountCommand> commands {
		BankAccountCommand{ba, BankAccountCommand::Actions::deposit, 100},
		BankAccountCommand{ba, BankAccountCommand::Actions::withdraw, 200},

	};

	// apply all the commands
	for (auto& cmd : commands)
	{
	    cmd.call();
	}

	for(auto it = commands.rbegin(); it != commands.rend(); ++it)
	{
		  it->undo();
	}

	BankAccount ba, ba2;
	ba.deposit(100);

	MoneyTransferCommand cmd(ba, ba2, 5000);

	cmd.call();

	cmd.undo();


	return 0;
}*/
