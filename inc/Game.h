#include <fstream>
#include "Carefull_Player.h"


class Game
{
	int Point_player;		
	int Point_croupier;
	std::vector<std::string> &Deck;
	Player &Game_Player;
	Player &Croupier;
public:
	// ta linia jest zdecydowania za długa, nie mieści mi się na monitorze
	Game(std::vector<std::string> &deck, Player &game_player, Player &croupier) :Deck(deck), Game_Player(game_player), Croupier(croupier) 
	{
		Point_player=0;
		Point_croupier=0;
	}

	bool start_game();

	void play_game();

	void prayer_win(); 	// te metody chyba powinny być publiczne, chyba że mamy szefa kasyna,
						// który z zewnątrz może zadecydowac w dowolnym momencie
						// kto wygrał grę bez znaczenia jakie kto ma karty
	void croupier_win();

	void end_game();    // gra chyba powinna się kończyć sama :P

	void deck_fill(std::string file_name);

};


