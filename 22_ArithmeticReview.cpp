#include <iostream>
#include <cmath>
#include <string>
using namespace std;


double getDoubleSum(double x, double y) {
	return (x + y) * 2;
}

	int main(){
		double number1, number2;

		cout << "Enter first number: " << endl;
		cin >> number1;

		cout << "Enter secound number: " << endl;
		cin >> number2;

		double result = getDoubleSum(number1, number2);

		cout << "The double sum is: " << result << endl;

		return 0;
	}
