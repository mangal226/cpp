#include <string>
#include "Account.h"
//using namespace std;
using std::vector;
using std::string;
using std::to_string;
Account::Account() : balance(0) {}
//std::vector<Transaction> log;

vector<string> Account::Report() {
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transactions: ");

	for (auto t : log) {
		report.push_back(t.Report());
	}
	report.push_back("-------------------------");

	return report;
}

bool Account::Deposit(int amount) {
	if (amount <= 0) {
		return false;
	}
	else {
		balance = balance + amount;
		log.push_back(Transaction(amount, "Deposit"));
		return true;
	}
}

bool Account::Withdraw(int amount) {
	if (amount >= balance || amount<=0) {
		return false;
	}
	else {
		balance -= amount;
		log.push_back(Transaction(amount, "Withdraw"));
		return true;
	}

}