// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "commands.h"

using namespace std;

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main()
{
	int myScore = 150;
	int yourScore = 1000;

	cout << "Original values\n";
	cout << "My Score: " << myScore << "\n";
	cout << "Your score: " << yourScore << "\n\n";

	cout << "Calling Bad Swap.\n";
	badSwap(myScore, yourScore);
	cout << "My score: " << myScore << "\n";
	cout << "Your score: " << yourScore << "\n\n";

	cout << "Calling Good Swap.\n";
	goodSwap(&myScore, &yourScore);
	cout << "My score: " << myScore << "\n";
	cout << "Your score: " << yourScore << "\n";

	system("pause");

    return 0;
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