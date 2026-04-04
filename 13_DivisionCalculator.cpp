#include <iostream>

using namespace std;

void division() {
	int number1 = 0;
	int number2 = 0;
	int answer = 0;
	int remainder = 0;


	cout << "Enter A Number: " << endl;
	cin >> number1;

	cout << "Entter Another Number: " << endl;
	cin >> number2;

	answer = number1 / number2;
	remainder = number1 % number2;

	cout << number1 << '/' << number2  << '=' << answer << " remainder " << remainder << endl;
	

}

int main() {
  division();
	return 0;
}