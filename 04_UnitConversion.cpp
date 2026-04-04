#include <iostream>
#include <iomanip>

using namespace std;



int main() {
	int Miles;
	double Meters;
	double Yards;
	double Feet;
	int FootballField = 100;
	int whole;

	cout << "Please input miles to convert into meters,yars,feet: ";
	cin >> Miles;
	Meters = (Miles * 1609.344);
	Yards = (Miles * 1760);
	Feet = (Miles * 5280);
	cout << "Meters: " << Meters << endl; 
	cout << "Yards: " << Yards << endl;
	cout << "Feet: " << Feet << endl;
	whole = Yards / FootballField;
	cout << "Number of Whole Football fields: " << whole << endl;


	system("PAUSE");
	return 0;

}