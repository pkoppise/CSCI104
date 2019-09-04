/*
 * array_backed.cpp
 *
 *  Created on: 29-Aug-2019
 *      Author: 503129832
 */
#include <iostream>
#include <math.h>
#include <array>
#include <numeric>
#include <algorithm>

using namespace std;

class Creature
{
private:
	enum Abilities
	{
		strength,
		agility,
		intelligence,
		count
	};
	array<int,Abilities::count> abilities;
public:
	int get_strength() const { return abilities[strength]; }
	int get_agility() const { return abilities[agility]; }
	int get_intelligence() const { return abilities[intelligence]; }

	void set_strength(int value) { abilities[strength] = value; }
	void set_agility(int value) { abilities[agility] = value; }
	void set_intelligence(int value) { abilities[intelligence] = value; }

	int sum() const {
	   return accumulate(abilities.begin(), abilities.end(), (int)0);
	}

	double average() const {
		return sum()/ (double)Abilities::count;
	}

	int max() const {
		return *max_element(abilities.begin(), abilities.end());
	}
};

/*
int main()
{
  Creature orc;
  orc.set_strength(16);
  orc.set_agility(11);
  orc.set_intelligence(9);

  cout << "The orc has an average stat of "
       << orc.average()
       << " and a maximum stat of "
       << orc.max()
       << "\n";

  return 0;
}*/
