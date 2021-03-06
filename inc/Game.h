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
	Game(std::vector<std::string> &deck, Player &game_player, Player &croupier) :Deck(deck), Game_Player(game_player), Croupier(croupier) 
	{
		Point_player=0;
		Point_croupier=0;
	}

	bool start_game();

	void play_game();

	void prayer_win();

	void croupier_win();

	void end_game();

	void deck_fill(std::string file_name);

};


