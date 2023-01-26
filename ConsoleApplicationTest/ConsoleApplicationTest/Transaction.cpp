#include "Transaction.h"

Transaction::Transaction(int amount, string kind)
{
	amnt=amount;
	type = kind;

}

std::string Transaction::Report()
{
	string report;
	report = "";
	report += type;
	report += to_string(amnt) ;
	return std::string();
}
