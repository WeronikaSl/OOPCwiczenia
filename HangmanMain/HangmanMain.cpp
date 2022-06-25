#include "Hangman.hpp"
#include <string>
#include <iostream>

int main()
{
	int maxAttempts = 0;
	std::cout << "Podaj ilość prób: ";
	std::cin >> maxAttempts;
	Hangman game("wisielec", maxAttempts);
	int amountOfAttempts = 0; // zlicza ile razy checkChar zwróciło true - jeśli równa się maxAttempts to program sie kończy
	char letter = 'a';
	do
	{
		game.print();
		std::cout << std::endl;
		
		std::cout << "Podaj literę: ";
		std::cin >> letter;
		amountOfAttempts += game.checkChar(letter); //dodać później w klasie metodę attempts

	} while (amountOfAttempts != maxAttempts);

	std::cout << "Koniec gry, sekretne słowo to: " << game.endOfTheGame() << std::endl;
}
