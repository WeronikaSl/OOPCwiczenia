#include <iostream>
#include "Wordle2.hpp"

int main()
{
    Wordle game("MEOWY"); //tu musi być pętla wykonująca się dopóki attempts < 7 lub nie odganie słowa
    std::string guess = {};
    bool endGameIfGuessed = 0;
    int attempt = 0;
    do
    {
        std::cin >> guess;
        game.test(guess);
        game.print();
        endGameIfGuessed = game.ifGuessed(guess);
        attempt++;
    } while ((attempt < 6) && (endGameIfGuessed == 0));

}
