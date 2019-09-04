#include <iostream>
using namespace std;

class Game
{
protected:
	int number_of_players;
	int current_player{ 0 };
public:
	Game(int num_players): number_of_players(num_players) {}
	void run()
	{
		start();
		while (!have_winner())
			take_turn();
		cout << "Player " << get_winner() << " wins.\n";
	}

	virtual void start() = 0;
	virtual bool have_winner() = 0;
	virtual void take_turn() = 0;
	virtual int get_winner() = 0;
	virtual ~Game() {}
};

class Chess: public Game
{
private:
	int turns{ 0 };
	int max_turns{ 10 };
public:
	Chess() : Game{ 2 } {}
	void start() override
	{
		cout << "Starting a game of chess with " << number_of_players << " players\n";
	}

	bool have_winner() override
	{
		return turns == max_turns;
	}

	void take_turn() override
	{
		cout << "Turn " << turns << " taken by player " << current_player << "\n";
		turns++;
		current_player = (current_player + 1) % number_of_players;
	}

	int get_winner() override
	{
		return current_player;
	}

};

/*
int main()
{
	Chess chess;
	chess.run();
	return 0;

}*/
