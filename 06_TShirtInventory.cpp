#include <iostream>

using namespace std;

int main() {
	
	int shirts;
	int people;
	int left;
	int need;

	cout << "Number of t-shirts available" << endl;
	cin >> shirts;

	cout << "Number of participants" << endl;
	cin >> people;

	if (shirts >= people) {
		left = shirts - people;
		cout << "You have enough t-shirts. There are " << left << " left over" << endl;
	}
	else {
		need = people - shirts;
		cout << "You do not have enough t-shirts for each participant. You need " << need << " more" << endl;
	}

	return 0;
}