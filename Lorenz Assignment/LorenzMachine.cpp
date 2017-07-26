#include "LorenzMachine.h"
#include <string>
using namespace std;

LorenzMachine::LorenzMachine()//Constructor for LorenzMachine
{


}

LorenzMachine::~LorenzMachine()//Deconstructor for LorenzMachine
{
}

LorenzMachine::LorenzMachine(string pin, int pos, int length)
{
	//Instance constructor

	//initialise values for psi and chi wheels.
	lorenzcollection.InitWheels(pin, pos, length);
	//initialising values for motor wheels
	mu37.InitWheel(pin, 253,37);
	mu61.InitWheel(pin, 290,61);
}

string LorenzMachine::xorFunctionality(string input1, string input2) 
{
	//Function for the functionality of an XOR gate.

	string temp = "12345";//holder value

	for (size_t i = 0; i < temp.size(); i++)//for all the wheels
	{
		
		temp[i] = input1[i] ^ input2[i];//xor chi and psi together.
	}

	return temp;
}

string LorenzMachine::machine(string _y)
{
	//Function for providing the main simulation.
	string key;//used to encrypt/decrypt the message.
	string chi;
	string psi;

	char output;
	string plaintext;// the original message's baudot code.
	string encryptedKey;//result of xoring plaintext with key
	string outputstring;// the final encrypted/decrypted message.

	for (size_t i = 0; i <_y.size(); i++)
	{
		baudot.stringToBaudot(_y.at(i), plaintext);
		//converts the chars in order to baudots.

		chi = lorenzcollection.getCurrentSettings(0);
		//chi is initialised with all  the pin settings
		psi = lorenzcollection.getCurrentSettings(1);
		//chi is initialised with all  the pin settings

		key = xorFunctionality(chi,psi); 
		// chi xor'd with psi to get the key
		encryptedKey = xorFunctionality(plaintext,key);
		lorenzcollection.rotateWheel(0);//rotates chi wheels

		if (mu37.getCurrentValue() == '1')
		{
			lorenzcollection.rotateWheel(1);
		}

		if (mu61.getCurrentValue() == '1')
		{
			mu37.RotateWheel();
		}

		mu61.RotateWheel(); //rotation


		baudot.baudotToString(encryptedKey, output);
		//converts the baudots in order to chars.

		outputstring.push_back(output);
	}
	// reset all wheels to their original position to prepare for the next operation.
	lorenzcollection.resetWheel();
	mu61.resetWheel();
	mu37.resetWheel();

	return outputstring; //will display on console


}

