#ifndef CAREFULL_PLAYER_H
#define CAREFULL_PLAYER_H

#include "Player.h"
class Carefull_Player :public Player
{
public:
	Carefull_Player(std::vector<std::string> *deck);

	bool move();
};

#endif

