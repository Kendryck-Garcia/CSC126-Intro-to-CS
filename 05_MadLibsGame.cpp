#include <iostream>
#include <string>

using namespace std;

int main() {
	string adjective1;
	string adjective2;
	string adjective3;
	string adjective4;
	string noun1;
	string noun2;
	string noun3;
	string noun4;
	string verb1;
	string verb2;
	string emotion;

	cout << "Welcome to Madlibs Program" "\n" << endl;
	cout << "PLease enter the Following to get your story" "\n" << endl;

	cout << "Enter a Adjective1: " << endl;
	cin >> adjective1;
	cout << "Enter a Adjective2: " << endl;
	cin >> adjective2;
	cout << "Enter a Adjective3: " << endl;
	cin >> adjective3;
	cout << "Enter a Adjective4: " << endl;
	cin >> adjective4;
	cout << "Enter a Noun1: " << endl;
	cin >> noun1;
	cout << "Enter a Noun2: " << endl;
	cin >> noun2;
	cout << "Enter a Noun3: " << endl;
	cin >> noun3;
	cout << "Enter a Noun4: " << endl;
	cin >> noun4;
	cout << "Enter a Verb1: " << endl;
	cin >> verb1;
	cout << "Enter a Verb2: " << endl;
	cin >> verb2;
	cout << "Enter a Emotion: " << endl;
	cin >> emotion;

	cout << "Here's your Story" "\n" << endl;

	cout << "In a " << adjective1 << " forest, " "there lived a " << noun1 << " who enjoyed " << verb1 << " all day long. " "\n" "The " << noun1 << " had a " << adjective2 << " friend, " "a " << noun2 << ", who loved to " << verb2 << " through the trees." "\n"

		"One day, " "the " << noun1 << " and the " << noun2 << " found a hidden " << adjective3 << " cave. " "\n" "Inside, " "they discovered an ancient "<< noun3 << " that sparkled with magical energy." "\n"

		"Curious, " "they decided to " << verb1 << " deeper into the cave. " "\n" "The adventure led them to a secret chamber where they found a treasure chest filled with " << adjective2 << " gems."  "\n"

		"The " << noun1 << " and the " << noun2 << " felt " << adjective3 << " and celebrated their discovery with a grand feast. " "They lived happily ever after," "\n" "always remembering their thrilling exploration in the forest. " << adjective4 << " day, " "and the " << noun4 << " was very " << emotion <<  "." << endl;

	system("PAUSE");

		return 0;


}