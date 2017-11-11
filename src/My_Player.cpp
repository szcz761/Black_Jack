#include "My_Player.h"


My_Player::My_Player(std::vector<std::string> *deck)
{
	Deck = deck;
	Name = "My Player";
	Limit = 21;
}

bool My_Player::move()
/*liczy jakie zosta³y karty w tali (gracz ma prawo to pamietac) i patrzy jaka jest szansa
wylosowania karty zblizajacej do wygranej ale nie przekraczaj¹c¹ próg 21 punktów.
Je¿eli szansa ta wynosi wiecej ni¿ 50% dobiera kolejn¹ kartê.*/
{

	long double chanse = 1;
	while (chanse > 0.5)
	{
		if (Sum >= 21)
			return false;
		int count_good = 0;
		for (unsigned int i = 0;i < Deck->size();++i)
		{
			std::vector<std::string> tmp_hand = Hand;
			Hand.push_back(Deck->at(i));
			if (calculate_point() <= 21)
				++count_good;
			Hand = tmp_hand;
			calculate_point();
		}
		if (Deck->size() == 0)
			chanse = count_good;
		else
			chanse = (long double)count_good / (long double)Deck->size();
		//std::cout << "Chanse: " << chanse << endl;

		if (chanse > 0.5)
			if (Drow())
				return true;
	}
	return false;
}