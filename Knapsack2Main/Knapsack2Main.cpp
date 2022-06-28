#include "Knapsack2.hpp"
#include <iostream>

int main()
{
    
    Backpack backpack; 
    Robber robber(backpack, nullptr);
    Shop shop (&robber);







    //Item item; //test dla metody putInBackpack
    //item.value = 3; //test dla metody putInBackpack
    //item.weigth = 4; //test dla metody putInBackpack
    //backpack.putInBackpack(item, 6); //test dla metody putInBackpack
    // 
    //std::cout << backpack.peek(); //test dla metoty peek

    //Item item = shop.stealItem(2); //test metody steaItem i konstruktora shop
    //std::cout << item.value << std::endl << item.weigth; //test metody steaItem i konstruktora shop
}
