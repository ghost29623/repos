#include "BankAccount.h"


BankAccount::BankAccount(string num, string typ, Customer& cus):customer(cus)
{
	accountNumber = num;
	accountType = typ;

};

