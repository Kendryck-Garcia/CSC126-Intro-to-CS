#include <iostream>
using namespace std;
int main() {
	int x = 0;
	int y = 2;
	int z = 20;
	x = y + z;
	while (y < z) {
		z -= 2;
		x -= 3;
		if (z < x) {
			z++;
		}
		else {
			x++;
		}
		y++;
	}
	cout << "Out of loop" << endl;
	return 0;
}