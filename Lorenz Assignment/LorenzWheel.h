#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#ifndef LORENZWHEEL_H//Header guards.
#define LORENZWHEEL_H




class LorenzWheel
{
public:

	LorenzWheel();//Constructor
	~LorenzWheel();//Deconstructor

	void InitWheel(string pin, int pos, int length);

	string getPinSettings();

	void resetWheel() { currentPosition = 0; }

	char getCurrentValue();
	void RotateWheel();

private:

	int currentPosition;//current pos of wheel, refers to the position and not the value
	string pinsettings;
	int pinposition;
	string subPinSettings;//represents the settings for each wheel.



};

#endif 