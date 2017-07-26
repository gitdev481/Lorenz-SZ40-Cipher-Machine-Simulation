#include <iostream>
#include <fstream>
#include <string>
#include "LorenzMachine.h"
using namespace std;

int main()
{
	//Used to read the contents of the pinsettings.dat file into memory.
	string pinSettings;
	ifstream infile;
	infile.open("pinsettings.dat");
	getline(infile,pinSettings);
	infile.close();



	LorenzMachine lm(pinSettings,0,0);
	//creating an instance of LorenzMachine class to call the machine function.

	string _encrypt1 = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";

	string _encrypt2 = "A MAN PROVIDED WITH PAPER PENCIL AND RUBBER AND" 
		" SUBJECT TO STRICT DISCIPLINE IS IN EFFECT A UNIVERSAL MACHINE";

	string _decrypt1 = "BVJM,*V*TMAK*ZMK-XHGDVEMGOZUER .XWNIASN NCOVJ"
		",ABELCLOUG,AD*OBRFLJXH! APZ*HJFHG.CQJRB";

	string _decrypt2 = "KIK!F*AOYTUUU,VGBDQKDP*GPVAZMROTX"
		",VCF!C AFS NUARKLOGISGU*FBG!EBLQ-H* LX*K";

	cout <<"Encrypting the first message." << endl;
	cout << _encrypt1 << endl;
	cout << lm.machine(_encrypt1) << endl;
	cout << endl;
	cout <<"Encrypting the second message." << endl;
	cout << _encrypt2 << endl;
	cout << lm.machine(_encrypt2) << endl;
	cout << endl;
	cout <<"Decrypting the third message." << endl;
	cout << _decrypt1 << endl;
	cout << lm.machine(_decrypt1) << endl;
	cout << endl;
	cout <<"Decrypting the fourth message." << endl;
	cout << _decrypt2 << endl;
	cout << lm.machine(_decrypt2) << endl;
	

	cin.ignore(1);
}