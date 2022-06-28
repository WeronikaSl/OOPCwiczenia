#pragma once
#include <string>

class Wordle
{
	std::string secretWord = {};
	std::string guesses[6] = {}; //to co będziemy zgadywać
	std::string answers[6] = {}; //przechowuje literki kolory
	int attempt = 0; //wskazuje na wiersz, w którym jeszcze nie ma słowa
public:
	Wordle(std::string _secretWord);
	void test(std::string guess); //wrzuca tego stringa z kolorami do tablicy
	void draw(); //wypisz obie tablice, jedna obok drugiej + na początku wyzyścić ekran, //BEADY \t GGGGG
	bool isFinished(); //sprawdza czy ostatnie słowo to secret oraz porównac liczbę prób
};