#include <iostream>

using namespace std;

double pyramid(double base, double height) {
	double volume = (1.0 / 3.0) * (base * base) * height;
	return volume;
}


int main() {
    double base;
    double height;

    cout << "Enter the length of the base: ";
    cin >> base;

    cout << "Enter the height of the pyramid: ";
    cin >> height;

    double volume = pyramid(base, height);
    cout << "The volume of the pyramid is: " << volume << endl;


	return 0;
}