#ifndef CROUPIER_PLAYER_H
#define CROUPIER_PLAYER_H

#include "Player.h"
class Croupier_Player :public Player
{
public:
	Croupier_Player(std::vector<std::string> *deck);

	bool move();
};

#endif
