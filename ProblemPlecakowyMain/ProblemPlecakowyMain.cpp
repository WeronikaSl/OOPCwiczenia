#include "ProblemPlecakowy.hpp"
#include <iostream>

int main()
{

    Robber robber(30);
    Shop shop;
    robber.robWhatever(shop);
    robber.getValue();
    std::cout << robber.getValue() << std::endl;
}

