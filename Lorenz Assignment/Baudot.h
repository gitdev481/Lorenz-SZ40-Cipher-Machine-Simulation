#ifndef BAUDOT_H//Header guards.
#define BAUDOT_H

#include<iostream>
#include<map>
#include<string>
#include <vector>

using namespace std;

class Baudot
{
public:

	Baudot();//Constructor
	~Baudot();//Deconstructor

	void stringToBaudot(char, string& baudoted);

	void baudotToString(string& string2, char& baudoted);

	string charToBaudot(char character);

	char baudotToChar(string baudotcharacter);

private:

	map <string, char> baudotTable;//map baudot binary to char, shown in the table.
	map <char, string> characterTable;//map char to baudot binary, shown in the table.
	
};

#endif 