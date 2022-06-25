#pragma once
#include <iostream>
#include <string>

class MyString
{
	char* arr;
public:
	MyString();
	MyString(char* input);
	MyString(const MyString& other);
	void print();
	MyString append(char* input);
	MyString append(MyString input);
	MyString firstWord();
	virtual ~MyString();

};
