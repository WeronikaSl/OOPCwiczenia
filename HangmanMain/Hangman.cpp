#include "Hangman.hpp"
#include <iostream>
#include <string>

Hangman::Hangman(std::string _wordToGuess, int _maxAttempts)
{
	wordToGuess = _wordToGuess;
	maxAttempts = _maxAttempts;
	guess = _wordToGuess;
	int length = _wordToGuess.length();
	for (int i = 0; i < length; ++i) //wypełnia stringa guess podłogami 
	{
		guess[i] = '_';
	}
	for (int i = 0; i < 26; ++i)
	{
		Alphabet[i] = static_cast<char>(97 + i);
	}
}

void Hangman::print()
{
	for (int i = 0; i < (guess.length()); ++i)
	{
		std::cout << guess[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 26; ++i)
	{
		std::cout << Alphabet[i] << " ";
	}
}

bool Hangman::checkChar(char userInput)
{
	for (int i = 0; i < 26; ++i)//przechodzi po alfabecie, jak jakaś litera użyta to dla tego indeksu wstawia podłogę

	{
		if (Alphabet[i] == userInput) // to się zawsze wykona
		{
			Alphabet[i] = '_';
		}
	}
	int length = wordToGuess.length();
	for (int i = 0; i < length; ++i) //przechodzi po słowie do zgadnięcia, jak jakaś litera pasuje to dla tego indeksu wstawia literę zamiast podłogi w guess
	{
		if (wordToGuess[i] == userInput)
		{
			guess[i] = userInput;
			return false; // zwraca false jeśli litera znajduje sie w slowie
		}
		else
		{
			return true; //zwraca true jeśli jej nie ma - wpływa to na maxAttempts
		}
		
	}

}

std::string Hangman::endOfTheGame()
{
	return wordToGuess;
}


