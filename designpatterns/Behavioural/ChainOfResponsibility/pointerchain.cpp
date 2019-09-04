#include <iostream>
#include <string>

using namespace std;

class Creature
{
public:
	string name;
	int attack, defense;
public:
	Creature(const string& name, int attack, int defense): name(name), attack(attack), defense(defense) {}
	friend ostream& operator<<(ostream& out, const Creature &obj)
	{
		out << "Name:" << obj.name << " Attack:" << obj.attack << " Defense:" << obj.defense << endl;
		return out;
	}
};

class CreatureModifier
{
private:
	CreatureModifier* next{nullptr};
protected:
	Creature& creature;
public:
	CreatureModifier(Creature& creature):creature(creature) {}
	virtual ~CreatureModifier() = default;
	void add(CreatureModifier *cm)
	{
		if(next)
		{
			next->add(cm);
		}
		else
		{
			next = cm;
		}
	}

	virtual void handle()
	{
		if(next)
			next->handle();
	}
};

class DoubleAttackModifier: public CreatureModifier
{
public:
	DoubleAttackModifier(Creature &creature): CreatureModifier(creature) {}
	void handle() override
	{
		creature.attack *= 2;
		CreatureModifier::handle();
	}

};

class IncreaseDefenseModifier: public CreatureModifier
{
public:
	IncreaseDefenseModifier(Creature &creature): CreatureModifier(creature) {}
	void handle() override
	{
		if(creature.defense <= 2)
		{
			creature.defense++;
		}
		CreatureModifier::handle();
	}
};

class NoBonusModifier: public CreatureModifier
{
public:
	NoBonusModifier(Creature &creature): CreatureModifier(creature) {}
	void handle() override
	{}
};

/*
int main()
{
	Creature goblin("Goblin", 1,1);
	CreatureModifier root(goblin);
	DoubleAttackModifier r1(goblin);
	IncreaseDefenseModifier r2(goblin);

	//NoBonusModifier nobonus(goblin); linking does not happen
    //root.add(&nobonus);

	root.add(&r1);
	root.add(&r2);

	root.handle();
	cout << goblin << endl;
    return 0;
}*/
