#include "Wordle.hpp"
#include <iostream>
#include <stdlib.h>

Wordle::Wordle(std::string _secretWord)
{
	secretWord = _secretWord;
	for (int i = 0; i < 5; ++i)
	{
		guesses[i] = "     ";
		answers[i] = "     ";
	}
}

void Wordle::test(std::string guess)
{
	guesses[attempt] = guess;

	for (int i = 0; i < 5; ++i) //wypełnia defaultowo B
	{
		answers[attempt][i] = 'B';
	}
	for (int i = 0; i < 5; ++i) //i < 5 bo słowo zawsze będzie miało 5 liter
	{
		if (secretWord[i] == guess[i]) //attempt będzie wskazywać, o które słowo chodzi
		{
			answers[attempt][i] = 'G';
		}

	}
	for (int i = 0; i < 5; ++i)
	{
		for (int k = 0; k < 5; ++k)
		{
			if (guess[i] == guess[k] && answers[attempt][i] != 'G') // będzie porównywać każdą literkę z guessa, z każdą z guesses
			{
				answers[attempt][i] = 'Y';
			}
		}
	}
	attempt++;
}

void Wordle::draw()
{
	system("cls"); //czyści konsolę
	for (int i = 0; i < 6; ++i)
	{
		std::cout << guesses[i];
		std::cout << "\t";
		std::cout << answers[i];
		std::cout << std::endl;
	}

}

bool Wordle::isFinished()
{
	if (("GGGGG" == guesses[attempt - 1]) || (attempt == 6))
	{
		return true;
	}
	else
	{
		return false;
	}
}
