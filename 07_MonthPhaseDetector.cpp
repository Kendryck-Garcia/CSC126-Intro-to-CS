#include <iostream>
using namespace std;

int main() {
	int Day;
	cout << "Todays Date Day Number:";
	
	cin >> Day;
	
	if (Day == 1) {
		cout << "Welcome to a new month." << endl;
	}

	if (Day >= 2 && Day <= 15) {
		cout << "It is the first half of the month!" << endl;
	}

	if (Day >= 16 && Day <= 31) {
		cout << "It is the end of the month!" << endl;
	}

	if (Day > 31) {
		cout << "Invalid" << endl;
	}
		
	system("PAUSE");

	return 0;
}