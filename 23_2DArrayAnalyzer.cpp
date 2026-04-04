#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int rows = 3;
    const int columns = 10;
    int arr[rows][columns];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = rand() % 30 + 1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] > 20) {
                cout << "(" << i << ", " << j << ") has a value greater than 20" << endl;
            }
        }
    }

    return 0;
}