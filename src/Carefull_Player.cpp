#include "Carefull_Player.h"



Carefull_Player::Carefull_Player(std::vector<std::string> *deck)
{
	Deck = deck;
	Name = "Carefull Player";
	Limit = 12;
}

bool Carefull_Player::move()
{
	while (Sum < Limit)
		if(Drow())
			return true;
	return false;
}
