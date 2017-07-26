#ifndef LORENZMACHINE_H
#define LORENZMACHINE_H

#include "LorenzWheel.h"
#include <string>
#include "Baudot.h"
#include "LorenzWheelCollection.h"

using namespace std;

class LorenzMachine
{
public:

	LorenzMachine();//Constructor.
	LorenzMachine(string pin, int pos, int length);//instance constructor.
	~LorenzMachine();//Deconstructor

	void readPinSettings (int, int);
	void encode(string inputstr);
	string xorFunctionality(string, string);
	void setPins();
	string machine(string);

private:

	Baudot baudot;

	LorenzWheelCollection lorenzcollection;//making the instance of the class.
	

	//definitions of motor wheels.
	LorenzWheel mu61;
	LorenzWheel mu37;

};

#endif 