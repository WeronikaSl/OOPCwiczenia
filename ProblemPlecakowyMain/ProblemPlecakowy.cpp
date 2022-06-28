#include "Knapsack2.hpp"
#include "ProblemPlecakowy.hpp"

Backpack::Backpack(int capacity)
{
}

int Backpack::put(Item item)
{
	return 0; //ma zwracać wartość włożonego przedmiotu, korzystamy z tego w calculate value
}

Shop::Shop()
{
	for (int i = 0; i < 100; ++i)
	{
		items[i].weight = 0; //zmienić na random!
		items[i].value = 0;
	}
}

Item Shop::stealItem()
{
	return Item();
}

Item Shop::steal(int index)
{
	Item stolenItem; //tworzymy nowy obiekt item
	stolenItem.value = items[index].value; //przypisujemy mu wartość z tabeli z indeksu index
	stolenItem.weight = items[index].weight;
	items[index].value = 0;
	items[index].weight = 0; //zerujemy to w tablicy, ten item został ukradziony :D
	return stolenItem; //zwracamy ten item, wrzucamy do plecaka
}

int Robber::getValue()
{
	return 0;
}
