#include "My_Player.h"
class Croupier_Player :public Player
{
public:
	Croupier_Player(std::vector<std::string> *deck);

	bool move();
};

