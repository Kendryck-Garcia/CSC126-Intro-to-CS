#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int size = 25;
    int arr[size];

    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 51;
    }

    cout << "Elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int totalSum = findSum(arr, size);
    cout << "Sum: " << totalSum << endl;

    return 0;
}