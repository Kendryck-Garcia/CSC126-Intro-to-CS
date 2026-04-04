#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void burythetreasure() {
    srand(time(0));
    int x = (rand() % 5) + 1;
    int y = (rand() % 5) + 1;

    cout << "You have 5 tries to find the buried treasure" << endl;

    for (int i = 1; i <= 5; ++i) {
        int inputX, inputY;
        cout << "Enter your guess for X coordinate (1-5)" << endl;
        cout << "Attempt " << i << endl;
        cin >> inputX;
        cout << "Enter your guess for Y coordinate (1-5)" << endl;
        cin >> inputY;

        if (inputX == x && inputY == y) {
            cout << "Congratulations! You found the treasure";
            return;
        }
        else {
            cout << "Try again\n";
        }
    }

    cout << "Game Over!" << endl;
}

int main() {
    burythetreasure();
    return 0;
}