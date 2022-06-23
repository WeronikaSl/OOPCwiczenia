#include "MyStringZad.hpp"

MyString::MyString()
{
	this->arr = new char[1]; //tworzymy tablicę jednoelementową
	this->arr[0] = '\0';
}

MyString::MyString(char* input)
{
	int length = std::strlen(input);
	this->arr = new char[length + 1];
	for (int i = 0; i <= length; ++i)
	{
		arr[i] = input[i];
	}

}

void MyString::print()
{
	int i = 0;
	while (arr[i] !=0)
	{
		std::cout << arr[i];
		i++;
	}
	std::cout << std::endl;
}

MyString MyString::append(char* input)
{
	int length1 = std::strlen(arr); //zlicza długośc pierwszej tablicy - 3
	int length2 = std::strlen(input); // zlicza długość drugiej tablicy - 3
	int length3 = length1 + length2;// dodaje te długości - 6
	char *newArr = new char[length3+1]; // tworzymy nowego stringa - dodajemy do długości +1 dla zera - 7

	for (int i = 0; i < length1; i++) //wypełniamy znakami z pierwszej tablicy
	{
		newArr[i] = arr[i]; // [a,l,a]
	}
	for (int i = 0; i < length2; i++) //wypełniamy znakami z drugiej tablicy
	{
		newArr[i + length1] = input[i];// [a,l,a, k, o, t]
	}

	newArr[length3] = '\0'; //ustawia ostatnie miejsce w tablicy na zero


	return MyString(newArr);
}

MyString MyString::append(MyString input)
{
	MyString result;
	result = this->append(input.arr);

	return result;
}

MyString MyString::firstWord()
{
	int lengthOfWord = 0;
	int k = 0;
	while (arr[k] != ' ') //zlicza ilość znaków do pierwszej spacji
	{
		lengthOfWord++;
		k++;
	}
	char* tab = new char[lengthOfWord+1]; //tworzy nową tablicę o długości pierwszego słowa +1 dla zera
	for (int i = 0; i < lengthOfWord; ++i) //wypełnia nową tablicę pierwszym słowem
	{
		tab[i] = arr[i];
	}
	tab[lengthOfWord + 1] = '\0'; 

	MyString newArr(tab); //wywołujemy konstruktor parametrowy i przekazujemy tablicę zawierającą pierwsze słowo
	return newArr; //zwracamy ten nowy obiekt
}

MyString::~MyString()
{
	delete[] arr;
}
