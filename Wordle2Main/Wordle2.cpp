#include "Wordle2.hpp"
#include <iostream>
#include <stdlib.h>

Wordle::Wordle(std::string _secretWord)
{
	secretWord = _secretWord;
}

void Wordle::test(std::string guess)
{
	words[attempt] = guess;
	std::string tempWord(5, 'B'); //wypełnia najpierw cały rządek na czarno
	for (int i = 0; i < 5; ++i)
	{
		if (guess[i] == secretWord[i]) //jeśli literka w guess jest na tym zamym miejscu co w secretword to wypełnia miejsce w tablicy answers G
		{
			tempWord[i] = 'G';
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int k = 0; k < 5; ++k)
		{
			if ((guess[i] == secretWord[k]) && (tempWord[i] != 'G'))
			{
				tempWord[i] = 'Y';
			}
		}
	}
	answers[attempt] = tempWord; //zastępuje wiersz w tablicy słowem tempWord

	attempt++; //przy każdej próbie zwiększa się o 1
}

void Wordle::print()
{
	system("cls");
	for (int i = 0; i < 6; i++) //6 bo mamy 6 wierszy
	{
		std::cout << words[i] << '\t' << answers[i] << std::endl;
	}

}

bool Wordle::ifGuessed(std::string guess)
{
	if (guess == secretWord)
	{
		return true;
	}
	{
		return false;
	}
}

