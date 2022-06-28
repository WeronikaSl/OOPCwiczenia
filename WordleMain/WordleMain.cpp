#include "Wordle.hpp"
#include <iostream>
#include <stdlib.h>

void main2()
{
    Wordle game("BEADY");
    game.test("NEADY");
    game.draw();
    game.isFinished();
}
int main()
{
    Wordle game("BEADY");
    do
    {
        std::string word; //użytkownik podaje słowo, zgaduje
        std::cin >> word;
        game.test(word); //sprawdzamy czy słowo poprawne
        game.draw();
    }
    while (!game.isFinished()); //<6 bo zaczyamy od 0

}
