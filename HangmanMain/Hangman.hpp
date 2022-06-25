#pragma once
#include <string>

class Hangman
{
	std::string wordToGuess = {}; //słowo przekazane, które będziemy zgadywać
	int maxAttempts = 5;
	char Alphabet[26] = {};
	std::string guess = {}; //to słowo z podłogami co się będzie wyświetlać

public:
	Hangman(std::string _wordToGuess, int _maxAttempts);
	void print(); //ma wyświetlać guessa z podłogami + alfabet z podłogami i zużytymi literami
	bool checkChar(char userInput); //sprawdza czy dana litera podana przez graczkę istnieje w słowie, zwraca fałsz jeśli tak, true jeśli nie
	std::string endOfTheGame();

};
