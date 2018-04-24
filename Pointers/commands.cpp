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

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}