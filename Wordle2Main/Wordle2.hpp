#pragma once
#include <string>

class Wordle
{
	std::string words[6] = {};
	std::string answers[6] = {}; //zapamiętuje kolory
	std::string secretWord = {};
	int attempt = 0;
public:
	Wordle(std::string _secretWord);
	void test(std::string guess);  //przyjmuje słowo podane przez graczkę i sprawdza czy jest poprawne
	void print();
	bool ifGuessed(std::string guess);



};
