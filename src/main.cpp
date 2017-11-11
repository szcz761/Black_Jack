#include <fstream>
#include "Game.h"

using namespace std;

void deck_fill(string file_name, vector<string>& deck) 
{
  ifstream file(file_name,ios::in);
  if (file.is_open()) 
    {
      string cards = "";
      getline(file, cards);
      string delimiter = ";";
      size_t position = 0;
      while ((position = cards.find(delimiter)) != string::npos) 
	{
	  deck.push_back(cards.substr(0, cards.find(delimiter)));
	  cards.erase(0, cards.find(delimiter) + delimiter.length());
	}
    }
  else
    {
      string EX="Can't Open File!";
      throw EX;
    } 
}

int main(int argc, char *argv[])
{
try
  {
    vector<string> deck;
    deck_fill(argv[1],deck);

    Croupier_Player croupier(&deck);
    Carefull_Player carefull_player(&deck);
    My_Player my_player(&deck);
    
    Game game(deck, my_player, croupier);
    game.play_game();
    
  }
 catch(string EX)
   {
     cout<<EX<<endl;
   }
 return 0;
}
