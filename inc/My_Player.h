#ifndef MY_PLAYER_H
#define MY_PLAYER_H

#include "Player.h"
class My_Player :public Player
{
public:
	My_Player(std::vector<std::string> *deck);

	bool move();
		/*liczy jakie zosta³y karty w tali (gracz ma prawo to pamietac) i patrzy jaka jest szansa
		wylosowania karty zblizajacej do wygranej ale nie przekraczaj¹c¹ próg 21 punktów.
		Je¿eli szansa ta wynosi wiecej ni¿ 50% dobiera kolejn¹ kartê.*/
	
};

#endif
