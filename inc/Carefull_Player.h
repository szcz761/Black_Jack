#include "Croupier_Player.h"
class Carefull_Player :public Player
{
public:
	Carefull_Player(std::vector<std::string> *deck);

	bool move();
};


