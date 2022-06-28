#pragma once

class Robber;

struct Item
{
	int value = 0;
	int weigth = 0;
};
class Shop
{
	Robber* robber;
	Item itemsInShop[100] = {};
public:
	Shop(Robber *_robber); //tu tablica items będzie wypełniona randomowymi przedmiotami
	Item stealItem(int index); //tworzy nowy item, do którego skopiowane są wartości z tablicy a później z niej usunięte
};
class Backpack
{
	int capacity = 15; //stała pojemność 15 kg, powinno być const ale wtedy nie działa mi asocjacja
	int currentValue = 0; //wartość przedmiotów w plecaku 
	int weigthOfStolenItems = 0; //ile ważą już skardzione itemy
	Item itemsInBackpack[100] = {};
public:
	void putInBackpack(Item stolenItem, int index); //będzie dodawać do jej tablicy ten item zwrócony przez metodę stealItem z shop
	int peek(); //zwraca nam weigthOfStolenItems, będzie można kraść dopóki to nie przekroczy 15
};
class Robber
{
	Shop* shop;
	Backpack robbersBackpack;
public:
	Robber(Backpack _backpack, Shop* _shop);
	void stealWhatever(); //bierze pierwsze z brzegu i wrzuca wszystko co się zmieści, korzysta z metod putInbackPack i stealItem
	void stealSmart(); // :D robimy współczynik sensowności kradzierzy i złodziej kradnie to co mu się opłaca najbardziej xD

};
