#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	double number;
	double result;
	double number2;
	double y = 4;
	cout << "Enter a floating point number: " << endl;
	cin >> number;
	
	number2 = sqrt(number);
		cout << "The square root of the number: " << number2 << endl;

	 number2 = pow(number, y);
	 cout << "The number raised to the 4th power is: " << number2 << endl;

	 result = floor(number);
	 cout << "The floor of " << number << " is: " << result << endl;

	return 0;
}