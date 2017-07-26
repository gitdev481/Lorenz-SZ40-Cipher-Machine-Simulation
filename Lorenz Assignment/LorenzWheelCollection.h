#include "LorenzWheel.h"


#ifndef LORENZWHEELCOLLECTION_H//Header guards.
#define LORENZWHEELCOLLECTION_H


class LorenzWheelCollection
{

public:

	LorenzWheelCollection();//Constructor
	~LorenzWheelCollection();//Deconstructor


	//Function definitions.
	void InitWheels(string pin, int pos, int length);
	void rotateWheel(int wheelType);
	void resetWheel();
	void psiWheelCollection();
	void chiWheelCollection();




	string getWheelSettings(int wheelType);
	string getCurrentSettings(int wheelType);

private:

	LorenzWheel chi[5];
	LorenzWheel psi[5];
};

#endif 