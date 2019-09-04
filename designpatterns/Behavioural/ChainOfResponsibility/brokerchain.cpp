/*
 * brokerchain.cpp
 *
 *  Created on: 02-Sep-2019
 *      Author: 503129832
 */

#include <iostream>
#include <string>
using namespace std;

#include <boost/signals2.hpp>
using namespace boost::signals2;

class Query
{
public:
	string creature_name;
	enum Argument {
		attack,
		defense
	} argument;
	int result;
public:
	Query(const string& cname, Argument argument, int result): creature_name(cname), argument(argument), result(result) {}

};

class Game
{
public:
	boost::signals2::signal<void(Query&)> queries;
};

class Creature
{
public:
	string name;
	int attack, defense;
	Game& game;
public:
	Creature(const string& name, int attack, int defense, Game& game):name(name), attack(attack), defense(defense), game(game) {}
	  // no need for this to be virtual
	int GetAttack() const
	{
	    Query q{ name, Query::Argument::attack, attack };
	    game.queries(q);
	    return q.result;
	}

	friend ostream& operator<<(ostream& os, const Creature& obj)
	{
	    return os
	      << "name: " << obj.name
	      << " attack: " << obj.GetAttack() // note here
	      << " defense: " << obj.defense;
	}
};

class CreatureModifier
{
  Game& game;
  Creature& creature;
public:
  virtual ~CreatureModifier() = default;
  // there is no handle() function
  CreatureModifier(Game& game, Creature& creature) : game(game), creature(creature) {}
};

class DoubleAttackModifier : public CreatureModifier
{
  connection conn;
public:
  DoubleAttackModifier(Game& game, Creature& creature)
    : CreatureModifier(game, creature)
  {
    // whenever someone wants this creature's attack,
    // we return DOUBLE the value
    conn = game.queries.connect([&](Query& q)
    {
      if (q.creature_name == creature.name &&
        q.argument == Query::Argument::attack)
        q.result *= 2;
    });
  }

  ~DoubleAttackModifier()
  {
    conn.disconnect();
  }
};

/*
int main()
{
	  Game game;
	  Creature goblin{"Strong Goblin", 2, 2, game};

	  cout << goblin << endl;

	  {
	    DoubleAttackModifier dam{ game, goblin };

	    cout << goblin << endl;
	  }

	  cout << goblin << endl;
	  return 0;
}*/


