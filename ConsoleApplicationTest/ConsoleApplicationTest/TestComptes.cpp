#include <iostream>
using namespace std;

#include "Account.h"

int main() {

	Account a1;
	a1.Deposit(100);
	

	cout << "After deposit of $100 we have the new balance is " + a1.GetBalance()<< "\n";
	cout << "The report shown is: \n";
	for (auto s : a1.Report()) {
		cout << s;
		cout << "\n";
	}

	a1.Withdraw(15);
	cout << "After withdraw of $15 we have the new balance is " << a1.GetBalance() << "\n";
	cout << "The report shown is: \n";
	for (auto s : a1.Report()) {
		cout << s;
		cout<< "\n";
	}

	a1.Deposit(10);


	cout << "After deposit of $10 we have the new balance is " + a1.GetBalance() << "\n";
	cout << "The report shown is: \n";
	for (auto s : a1.Report()) {
		cout << s;
		cout<< "\n";
	}
	return 0;
	
}