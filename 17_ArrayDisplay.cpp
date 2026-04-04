#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 50;
    double list[SIZE];

    for (int i = 0; i < 25; i++) {
        list[i] = i * i;
    }
    for (int i = 25; i < SIZE; i++) {
        list[i] = i * 2.0;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << setw(8) << list[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}