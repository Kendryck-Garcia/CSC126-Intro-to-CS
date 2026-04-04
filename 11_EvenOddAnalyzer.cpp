#include <iostream>
using namespace std;

int main() {
	int userinput = 0;
	int sum = 0;
	int evenNub = 0;
	int oddNum = 0;

	cout << "Enter positive interger: " << endl;
	cin >> userinput;

	while (userinput >= 0) {
		sum += userinput;

		if (userinput % 2 == 0) {
			evenNub += userinput;
		}
		else {
			oddNum += userinput;
		}


	}

	cout << "Total Sum: " << sum << endl;
	cout << "Even Numbers Sum: " << evenNub << endl;
	cout << "Odd Numbers Sum: " << oddNum << endl;

	return 0;
}