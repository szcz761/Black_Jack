#ifndef PLAYER_H
#define PLAYER_H

#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>

class Player
{
protected:
	int Sum;
	int Limit;
	std::vector<std::string> *Deck;
	std::vector<std::string> Hand;
	std::string Name;
public:

	int sum();

	bool Drow();

	std::string name();

	virtual bool move() = 0;

	void print_hand();

	void throw_carts();

	int calculate_point();
};

#endif
