#ifndef MY_PLAYER_H
#define MY_PLAYER_H

#include "Player.h"
class My_Player :public Player
{
public:
	My_Player(std::vector<std::string> *deck);

	bool move();
		/*liczy jakie zosta�y karty w tali (gracz ma prawo to pamietac) i patrzy jaka jest szansa
		wylosowania karty zblizajacej do wygranej ale nie przekraczaj�c� pr�g 21 punkt�w.
		Je�eli szansa ta wynosi wiecej ni� 50% dobiera kolejn� kart�.*/
	
};

#endif
