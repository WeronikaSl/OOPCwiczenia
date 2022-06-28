#pragma once

struct Item
{
	int weight = 0;
	int value = 0;

};
class Shop
{
	Item items[100] = {};
public:
	Shop(); //wypełniamy naszą tablicę losowymi przedmiotami
	Item steal(int index); //ukradnij obiekt o indeksie
	Item peek(int index); //zajrzyj, sprawdź
};
class Backpack
{
	const int capacity; //pojemność plecaka, plecak ma 15kg, a każdy przedmiot w kg ile ma
	Item stolen[100] = {}; //zaczynasz grę, plecak jest pusty
	int value = 0; //wartość przedmiotów w plecaku
public:
	Backpack(int capacity);
	int calculateCurrentValue();
	int put(Item item);
};

class Robber
{
	Backpack& backpack; //może trzeba będzie referencję, plecsk powinien być skonstruowany w konstruktorze złodzieja
public:
	Robber(int capacity); //powinien zaincjalizować plecak odpowiednią pojemnością
	void robWhatever(Shop& shop); //pierwsze po kolei, sklep nie tworzy się razem ze złodziejem, musi być przekazany, bo chcemy tablicę
	//void robRandom(); //losowo
	//void robGreedy(); //
	int getValue();
};
