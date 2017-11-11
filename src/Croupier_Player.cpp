#include "Croupier_Player.h"



Croupier_Player::Croupier_Player(std::vector<std::string> *deck)
{
	Deck = deck;
	Name = "Croupier Player";
	Limit = 18;
}

bool Croupier_Player::move()
{
	while (Sum < Limit)
		if (Drow())
			return true;
	return false;
}
