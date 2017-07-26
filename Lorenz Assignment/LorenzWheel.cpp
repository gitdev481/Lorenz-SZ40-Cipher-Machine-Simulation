#include "LorenzWheel.h"
#include "LorenzMachine.h"
using namespace std;


LorenzWheel::LorenzWheel()//Constructor for LorenzWheel
{
	//giving the pos's default values.
	currentPosition = 0;
	pinposition = 0;
	
}

LorenzWheel::~LorenzWheel()//Deconstructor for LorenzWheel
{
}

void LorenzWheel::InitWheel(string pin, int pos, int length)
{
	//function that initialises every wheel.
	pinsettings = pin;
	subPinSettings = pinsettings.substr(pos, length);
}

string LorenzWheel :: getPinSettings() 
{
	return subPinSettings;
	//returns the pin settings of the current wheel
}

void LorenzWheel::RotateWheel()
{
	//Used for the rotation of one wheel

	currentPosition = currentPosition + 1;
	//increasing by 1 step

	if (currentPosition == subPinSettings.length()) 
	{
		//if current pos = length , it has reached the end.
		currentPosition = 0;
	}

}

char LorenzWheel::getCurrentValue()
{
	//assigns the required settings to each wheel.
	return subPinSettings[currentPosition];
}