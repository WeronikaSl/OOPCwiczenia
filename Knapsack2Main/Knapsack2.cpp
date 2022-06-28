#include "Knapsack2.hpp"
#include <iostream>

Shop::Shop(Robber *_robber)
{
	robber = _robber;
	for (int i = 0; i < 100; ++i)
	{
		itemsInShop[i].value = 5; //zmienić na wypełnianie randomowymi wartościami
		itemsInShop[i].weigth = 6;//zmienić na wypełnianie randomowymi wartościami
	}
}
Item Shop::stealItem(int index) //to będzie indeks z pętli for w metodzie stealWhatever
{
	Item stolenItem;
	stolenItem.value = itemsInShop[index].value;
	itemsInShop[index].value = 0;
	stolenItem.weigth = itemsInShop[index].weigth;
	itemsInShop[index].weigth = 0;
	return stolenItem;
}
void Backpack::putInBackpack(Item stolenItem, int index)
{
	itemsInBackpack[index].value = stolenItem.value;
	itemsInBackpack[index].weigth = stolenItem.weigth;
	currentValue += stolenItem.value;
	weigthOfStolenItems += stolenItem.weigth;
	//std::cout << itemsInBackpack[index].value << std::endl << itemsInBackpack[index].weigth; //test metody
}

int Backpack::peek()
{
	return weigthOfStolenItems;
}

Robber::Robber(Backpack _backpack, Shop* _shop)
{
	robbersBackpack = _backpack;
	shop = _shop;
}

void Robber::stealWhatever()
{
	int currentWeigth = robbersBackpack.peek();
	Item itemToSteal;
	do
	{
		for (int i = 0; i < 100; ++i)
		{
			Shop::stealItem(i);
		}
		//if ((currentWeigth + ) < 15)
		//{

		//}
	} while (currentWeigth < 15);
}
