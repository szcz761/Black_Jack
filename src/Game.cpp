#include "Game.h"

/*
 * Coś mi się zdaje, że format logowania zadałem inny...
 *
 * ponadto logowanie powinno być wykonywane przez klasę dostarzaną z zewnątrz
 */

bool Game::start_game()
{
	if (Game_Player.Drow() || Croupier.Drow() || Game_Player.Drow())
		return true;
	return false;
}

void Game::prayer_win()
{
	Game_Player.print_hand();
	Croupier.print_hand();

	std::cout << "\nPlayer Win!\n-------------------------------------------------" << std::endl;
	++Point_player;
}

void Game::croupier_win()
{
	Game_Player.print_hand();
	Croupier.print_hand();

	std::cout << "\nCroupier Win!\n-------------------------------------------------" << std::endl;
	++Point_croupier;
}

void Game::end_game()
{
	std::cout << "Player Points: " << Point_player<<" Croupier Points: "<< Point_croupier << std::endl;
	
	if (Point_player > Point_croupier)
		std::cout << "\n=======================================================================\nTHE GENERAL WINER IS: " << Game_Player.name() <<
		"\n=======================================================================" << std::endl;
	else if(Point_player == Point_croupier)
		std::cout << "\n=======================================================================\n DRAW! "<<
		"\n=======================================================================" << std::endl;
	else
		std::cout << "\n=======================================================================\nTHE GENERAL WINER IS: " << Croupier.name() <<
		"\n=======================================================================" << std::endl;
}

void Game::play_game()
{
	while (Deck.size() > 4)  // ten warunek można wyodrępnić do osobnej funkcji, np. isGameEnded()
	{
		if(start_game())   // trochę to nieczytelne
		{
			end_game();
			return;
		}
		if (Game_Player.move() || Croupier.Drow())
		{
			end_game();
			return;
		}
		if (Game_Player.sum() == 21)
			prayer_win();
		else if (Game_Player.sum() > 21)
			croupier_win();
		else
		{
			if (Croupier.move())
			{
				end_game();
				return;
			}
			if (Game_Player.sum() > Croupier.sum() || Croupier.sum() > 21)
				prayer_win();
			else
				croupier_win();
		}
		Game_Player.throw_carts();
		Croupier.throw_carts();
	}
	end_game();
}

// przetwarzanie talii powinno być realizowane w osobnej klasie
// no i kod wygląda podobnie jak u Kacpra Bieganka... rzekłbym ten sam
void Game::deck_fill(std::string file_name) 
{
	// coś formatowanie kodu jest tu inne niż w reszcie pliku...
  std::ifstream file(file_name,std::ios::in);
  if (file.is_open()) 
    {
      std::string cards = "";
      getline(file, cards);
      std::string delimiter = ";";
      size_t position = 0;
      while ((position = cards.find(delimiter)) != std::string::npos) 
	{
	  Deck.push_back(cards.substr(0, cards.find(delimiter)));
	  cards.erase(0, cards.find(delimiter) + delimiter.length());
	}
    }
  else
    {
      std::string EX="Can't Open File!";
      throw EX;
    } 
}
