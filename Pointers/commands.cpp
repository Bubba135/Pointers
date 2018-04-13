#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//this will replace my cout with a cooler name
void say(string sayThis)
{
	cout << sayThis << endl;
}

//this will replace cin with a cooler name.
string hear(string promptUser)
{
	string userInput = "";
	cout << promptUser << endl;
	cin >> userInput;
	return userInput;
}