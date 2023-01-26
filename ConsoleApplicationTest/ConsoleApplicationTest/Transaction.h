#pragma once
#include <string>
using namespace std;
class Transaction
{

private:
	int amnt;
	string type;
public:
	Transaction(int amount, string type);
	std::string Report();
};

