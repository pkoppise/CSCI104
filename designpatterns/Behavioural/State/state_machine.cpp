#include <iostream>
using namespace std;

class LightSwitch;

class State
{
public:
	virtual void on(LightSwitch *ls)
	{
		cout << "Light is already on" << endl;
	}

	virtual void off(LightSwitch *ls)
	{
		cout << "Light is already off" << endl;
	}

	virtual ~State() {}
};

class OffState: public State
{
public:
	OffState() { cout << " Light is turned off" << endl; }
	void on(LightSwitch *ls);
};

class OnState: public State
{
public:
	OnState() { cout << " Light is turned on" << endl; }
	void off(LightSwitch *ls);
};

class LightSwitch
{
private:
	State *state;
public:
	LightSwitch()
	{
		state = new OffState();
	}
	void setState(State *state)
	{
		this->state = state;
	}

	void on()
	{
		state->on(this);
	}

	void off()
	{
		state->off(this);
	}
};


void OffState::on(LightSwitch *ls)
{
	cout << "Switching light on" << endl;
	ls->setState(new OnState());
	delete this;
}

void OnState::off(LightSwitch *ls)
{
	cout << "Switching light off" << endl;
	ls->setState(new OffState());
	delete this;
}

/*
int main()
{
	LightSwitch lswitch;
	lswitch.on();
	lswitch.off();
	lswitch.off();

	return 0;
}*/
