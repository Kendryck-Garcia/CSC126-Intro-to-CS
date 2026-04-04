#include <iostream>
using namespace std;

int main() {
	int number1;
	int	number2;
	int sum = 0;

	cout << "PLease enter two numbers with a space between them. ";
	cin >> number1 >> number2;

	for (int a = 0; a < number1; a++) {
		for (int b = 0; b < number2; b++) {
			if (a == b) {
				cout << "\nThe indexes are equal!\n";
			}
			else {
				cout << "Not equal! ";
				sum += a + b;
			}
		}


	}
	cout << "\nThe total sum is " << sum << "\n";

	return 0;

}

