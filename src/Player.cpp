#include "Player.h"


int Player::sum()
{
	return Sum;
}

bool Player::Drow()
{
	if (Deck->size() == 0)
		return true;
	Hand.push_back(Deck->at(Deck->size() - 1));
	Deck->pop_back();
	Sum = calculate_point();
	return false;
}

std::string Player::name()
{
	return Name;
}

void Player::print_hand()
{
	std::cout << std::endl << Name << " hand: " << std::endl;
	copy(Hand.begin(), Hand.end(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << "\nPoints: " << Sum << std::endl;
}

void Player::throw_carts()
{
	Hand.clear();
}

int Player::calculate_point()
{
	int sum = 0;
	int A = 0;
	for (unsigned int i = 0;i < Hand.size();++i)
	{
		if (Hand[i] == "Q" || Hand[i] == "K" || Hand[i] == "J")
			sum += 10;
		else if (Hand[i] == "A")
		{
			sum += 11;
			++A;
		}
		else if(Hand[i]=="2" || Hand[i]=="3" || Hand[i]=="4" || Hand[i]=="5" || Hand[i]=="6" || Hand[i]=="7" || Hand[i]=="8" || Hand[i]=="9" || Hand[i]=="10")
			sum += std::stoi(Hand[i]);
		else
		{
		        std::string EX = "Wrong Deck!";
			throw EX;
		}
		
	}
	while (sum > 21 && A > 0)
	{
		sum -= 10;
		--A;
	}
	return sum;
}
