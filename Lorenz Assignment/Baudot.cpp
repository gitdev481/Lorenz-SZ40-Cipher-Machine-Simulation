#include "Baudot.h"
Baudot::Baudot()//Constructor for Baudot
{
}

Baudot::~Baudot()//Deconstructor for Baudot
{
}

void Baudot::stringToBaudot(char string1, string& baudoted)
{
	//Function that converts the current char to baudot

	baudoted = charToBaudot(string1);

	return;
}

void Baudot::baudotToString(string& string2, char& baudoted)
{
	//Function that converts the current baudot to char.

	baudoted = baudotToChar(string2); 

	return ;
}

char Baudot::baudotToChar(string baudotcharacter)
{
	// function that maps all baudot to their char equivalent.

	baudotTable["00011"] = 'A';
	baudotTable["11001"] = 'B';
	baudotTable["01110"] = 'C';
	baudotTable["01001"] = 'D';
	baudotTable["00001"] = 'E';
	baudotTable["01101"] = 'F';
	baudotTable["11010"] = 'G';
	baudotTable["10100"] = 'H';
	baudotTable["00110"] = 'I';
	baudotTable["01011"] = 'J';
	baudotTable["01111"] = 'K';
	baudotTable["10010"] = 'L';
	baudotTable["11100"] = 'M';
	baudotTable["01100"] = 'N';
	baudotTable["11000"] = 'O';
	baudotTable["10110"] = 'P';
	baudotTable["10111"] = 'Q';
	baudotTable["01010"] = 'R';
	baudotTable["00101"] = 'S';
	baudotTable["10000"] = 'T';
	baudotTable["00111"] = 'U';
	baudotTable["11110"] = 'V';
	baudotTable["10011"] = 'W';
	baudotTable["11101"] = 'X';
	baudotTable["10101"] = 'Y';
	baudotTable["10001"] = 'Z';
	baudotTable["01000"] = ',';
	baudotTable["00010"] = '-';
	baudotTable["11011"] = '!';
	baudotTable["11111"] = '.';
	baudotTable["00000"] = '*';
	baudotTable["00100"] = ' ';

	return baudotTable[baudotcharacter];
}

string Baudot::charToBaudot(char character)
{
	// function that maps all char to their baudot equivalent.

	characterTable['A'] = "00011";
	characterTable['B'] = "11001";
	characterTable['C'] = "01110";
	characterTable['D'] = "01001";
	characterTable['E'] = "00001";
	characterTable['F'] = "01101";
	characterTable['G'] = "11010";
	characterTable['H'] = "10100";
	characterTable['I'] = "00110";
	characterTable['J'] = "01011";
	characterTable['K'] = "01111";
	characterTable['L'] = "10010";
	characterTable['M'] = "11100";
	characterTable['N'] = "01100";
	characterTable['O'] = "11000";
	characterTable['P'] = "10110";
	characterTable['Q'] = "10111";
	characterTable['R'] = "01010";
	characterTable['S'] = "00101";
	characterTable['T'] = "10000";
	characterTable['U'] = "00111";
	characterTable['V'] = "11110";
	characterTable['W'] = "10011";
	characterTable['X'] = "11101";
	characterTable['Y'] = "10101";
	characterTable['Z'] = "10001";
	characterTable[','] = "01000";
	characterTable['-'] = "00010";
	characterTable['!'] = "11011";
	characterTable['.'] = "11111";
	characterTable['*'] = "00000";
	characterTable[' '] = "00100";

	return characterTable[character];
}

