#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
	int Shares;
	int Bprice;
	int Aprice;
	double Profit;

	cout << "How many shares purchased?: ";
	cin >> Shares;
    cout << "what was the price of the stock when purchased?: ";
	cin >> Bprice;
	cout << "What is the price of stock now?: ";
	cin >> Aprice;

	Profit = (Shares * Aprice) - (Shares * Bprice);

	cout << fixed << setprecision(2);
	cout << "You have made a profit of $" << Profit << " dollars since you bought " << Shares << " shares of" "\n"
		    "this stock." << endl;

	system("PAUSE");
	return 0;
}