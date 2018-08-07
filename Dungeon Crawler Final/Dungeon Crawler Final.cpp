// Dungeon Crawler Final.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int roomNumber;
int playerhealth;
int torchGrab;
int flintGrab;
int swordGrab;
int bagGrab;
int vialGrab;
int numOfVials;
int fountainGrab;
int beltGrab;
int helmGrab;
int bottleGrab;


int userInput;
int aiAction;
bool gameEnd = false;
bool gameStart = false;

int main()
{
	cout << "Dungeon Crawler is a text based adventure game.\nThe user navigates and makes decisions by responding to prompts with numerical inputs.\nThere also is combat which is turn based and utilizes numerical input for player actions and RNG for AI actions." << endl;
	system("pause");
	system("cls");
	while (gameEnd == false) {
		while (gameStart == false) {
			cout << "Welcome to Dungeon Crawler \n1. New Game \n2. Continue Game \n3. Save Game \n4. Exit Game" << endl;
			cin >> userInput;
			if (userInput == 1) {
				gameStart = true;
			}
			else if (userInput == 2) {

			}
			else if (userInput == 3) {

			}
			else if (userInput == 4) {

			}
			else {
				cout << "Please enter a valid value." << endl;
				system("pause");
			}
			system("cls");
		}
		while (gameStart == true) {
			cout << "Loop break" << endl;
			system("pause");

		}
	}
    return 0;
}

