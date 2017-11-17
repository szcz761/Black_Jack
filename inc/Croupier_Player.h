#include "My_Player.h"

// krupier nie jest graczem tylko elementem gry, nie podejmuje żadnej decyzji
// po jest ograniczony zasadami gry
class Croupier_Player :public Player
{
public:
	// dodaj do konstruktora słowo kluczowe 'explicit', poczytaj o co chodzi
	Croupier_Player(std::vector<std::string> *deck);

	bool move();
};

