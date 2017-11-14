#include "Game.h"


int main(int argc, char *argv[])
{
try
  {
    std::vector<std::string> deck;

    Croupier_Player croupier(&deck);
    Carefull_Player carefull_player(&deck);
    My_Player my_player(&deck);
    
    Game game(deck, my_player, croupier);
    game.deck_fill(argv[1]);
    game.play_game();
    
  }
 catch(std::string EX)
   {
     std::cout<<EX<<std::endl;
   }
 return 0;
}
