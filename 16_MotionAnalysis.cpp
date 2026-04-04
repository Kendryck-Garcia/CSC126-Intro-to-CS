#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 6;

void getData(double list[], int length) {
    cout << "Enter the total distance traveled after every 10 units of time." << endl;
    for (int i = 0; i < length; i++) {
        cout << "Enter total distance traveled at time " << i * 10 << " units: ";
        cin >> list[i];
    }
    cout << endl;
}

void averageSpeedOverTimeInterval(double list[], int length, double avgSpeed[]) {
    for (int i = 0; i < length - 1; i++) {
        avgSpeed[i] = (list[i + 1] - list[i]) / 10;
    }
}

void print(double list[], int length, double avgSpeed[]) {
    cout << setw(7) << "Time" << setw(20) << "Distance Traveled" << setw(10) << "Average Speed / Time Interval" << endl;
    cout << setw(5) << "0" << setw(6) << list[0] << setw(14) << "0.0 [0, 0]" << endl;

    for (int i = 1; i < length; i++) {
        cout << setw(7) << i * 10 << setw(14) << list[i] << setw(10) << avgSpeed[i - 1] << " [" << (i - 1) * 10 << ", " << i * 10 << "]" << endl;
    }
}

double HighAvgSpeed(double avgSpeed[], int length) {
    double highSpeed = avgSpeed[0];
    for (int i = 0; i < length - 1; i++) {
        if (avgSpeed[i] > highSpeed) {
            highSpeed = avgSpeed[i];
        }
    }
    return highSpeed;
}

double LowAvgSpeed(double avgSpeed[], int length) {
    double LowestSpeed = avgSpeed[0];
    for (int i = 0; i < length - 1; i++) {
        if (avgSpeed[i] < LowestSpeed) {
            LowestSpeed = avgSpeed[i];
        }
    }
    return LowestSpeed;
}

int main() {
    double distanceTraveled[SIZE];
    double averageSpeed[SIZE];

    cout << fixed << setprecision(2);

    getData(distanceTraveled, SIZE);
    averageSpeedOverTimeInterval(distanceTraveled, SIZE, averageSpeed);
    print(distanceTraveled, SIZE, averageSpeed);

    cout << "Highest Average Speed: " << HighAvgSpeed(averageSpeed, SIZE) << " units" << endl;
    cout << "Lowest Average Speed: " << LowAvgSpeed(averageSpeed, SIZE) << " units" << endl;

    return 0;
}