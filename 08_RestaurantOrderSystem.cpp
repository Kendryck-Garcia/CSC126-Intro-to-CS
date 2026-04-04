#include <iostream>;
#include <string>;
#include <cmath>;

using namespace std;

int main() {
	string appatizerchoice,maincourse,dessert;

	cout << "Hi, ""welcome to the resturant. ""Can I start with some appatizers?" << endl;
	cout << "A. Yes" << endl;
	cout << "B. No" << endl;
	cin >> appatizerchoice;

	if (appatizerchoice == "A") {
		cout << "What kind of appatizers would you like?" << endl;
		cout << "A. Mashed Potatoes" << endl;
		cout << "B. Cheese Sticks" << endl;
		cin >> appatizerchoice;

		if (appatizerchoice == "A") {
			cout << "Here are your mashed potatoes. ";
		}
		if (appatizerchoice == "B") {
			cout << "Here are your cheese sticks. " << endl;
		}
	}
	cout << "What would you like for the main course?" << endl;
	cout << "A. Chicken Parmesan" << endl;
	cout << "B. Meatloaf" << endl;
	cin >> maincourse;

	if (maincourse == "A") {
		cout << "Here are your chicken parmesan. ""What would you like for dessert?" << endl;
	}
	if (maincourse == "B") {
		cout << "Here is your meatloaf. ""What would you like for dessert?" << endl;
	}
	
	cout << "A. Cheese Cake" << endl;
	cout << "B. Brownies" << endl;
	cin >> dessert;

	if (dessert == "A") {
		cout << "Here is your cheese cake. ""Have a good night!" << endl;
	}
	if (dessert == "B") {
		cout << "Here is your brownies. ""Have a good night!" << endl;
	}

	system("PAUSE");
	return 0;
}