#include <iostream>
#include "MyStringZad.hpp"

int main()
{
    //MyString empty;
    //empty.print();

    //MyString alaMaKota((char*)"Ala ma kota");
    //alaMaKota.print();
    //MyString alaMaKotaAKotMa = alaMaKota.append((char*)", a kot ma ");
    //alaMaKota.print();
    //alaMaKotaAKotMa.print();

    //char* arr = new char[] { "A, l, e" };
    //MyString ale(arr);
    //delete[] arr;
    //ale.print();
    //MyString full = alaMaKotaAKotMa.append(ale);
    //full.print();

    char* arr = new char[] {"Ala ma kota"};

    MyString test(arr);
    test.print();
    std::cout << std::endl;
    test.firstWord();

    delete[] arr;
}

