#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    const int SIZE = 12;
    int arr[SIZE];
    ifstream file("C:/Users/garci/OneDrive/Computer Science/Lab 6.2/numbers.txt");

    if (!file) {
        return 1;
    }

    for (int i = 0; i < SIZE; ++i) {
        file >> arr[i];
    }

    file.close();

    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }

    int largest = arr[0];
    int Index = 0;
    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
            Index = i;
        }
    }

    cout << "The sum of the array is: " << sum << endl;
    cout << "The largest value is: " << largest << endl;
    cout << "Location of index: " << Index << endl;

    return 0;
}
