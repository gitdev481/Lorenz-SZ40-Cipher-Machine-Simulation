#include "LorenzWheelCollection.h"
using namespace std;
//allows the whole collection of wheels to do something
LorenzWheelCollection::LorenzWheelCollection()//Constructor for LorenzWheelCollection
{

}

LorenzWheelCollection::~LorenzWheelCollection()//Deconstructor for LorenzWheelCollection
{
}

void LorenzWheelCollection::InitWheels(string pin, int pos, int length)	
{
	//function for applying all psi/chi settings to all psi/chi wheels.
	psi[0].InitWheel(pin, 0, 43);
	psi[1].InitWheel(pin, 43, 47);
	psi[2].InitWheel(pin, 90, 51);
	psi[3].InitWheel(pin, 141,53);
	psi[4].InitWheel(pin, 194, 59);

	chi[0].InitWheel(pin,351,41);
	chi[1].InitWheel(pin,392,31);
	chi[2].InitWheel(pin,423,29);
	chi[3].InitWheel(pin,452,26);
	chi[4].InitWheel(pin,478,23);
}

void LorenzWheelCollection::rotateWheel(int wheelType)
{
	//rotates all chi and psi wheels by 1 step.
	for (int i = 0; i < 5; i ++)
	{
		if (wheelType == 0)
		{
			chi[i].RotateWheel();
		}
		else
		{
			psi[i].RotateWheel();
		}
	}

}

void LorenzWheelCollection::resetWheel()
{
	//resets chi/psi wheels back to their original settings
	for (int i = 0; i < 5; i ++ )
	{
		chi[i].resetWheel();
		psi[i].resetWheel();
	}

}

string  LorenzWheelCollection::getWheelSettings(int wheelType)
{
	//function thatpopulates the wheels with all the settings

	string constructWheels;//used for returning these settings

	if (wheelType == 0)
	{
		for (int i = 0; i < 5; i ++)
		{
			constructWheels += chi[i].getPinSettings();
		}
	}

	else
	{
		for (int i = 0; i < 5; i ++)
		{
			constructWheels += psi[i].getPinSettings();
		}
	}

	//adding characters one at a time
	return constructWheels;

}

string LorenzWheelCollection::getCurrentSettings(int wheelType)
{
	//outputs all chi/psi wheel settings at any particular moment.
	string currentSettings;

	if (wheelType == 0)
	{
		for (int i = 0; i < 5; i ++) //rotation of chi and psi wheels
		{
			currentSettings += chi[i].getCurrentValue();
		}
	}

	else
	{
		for (int i = 0; i < 5; i ++)//rotation of chi and psi wheels
		{
			currentSettings += psi[i].getCurrentValue();
		}
	}

	
	return currentSettings;


}










