
#pragma once
#include "customer.h"
#include <iostream>
#include "string"
using namespace std;

class BankAccount {
private:
	string accountNumber;
	string accountType;
	double balance;
	Customer& customer;

public:
	BankAccount(string, string, Customer&);
	string getAccountNumber() { return accountNumber; };
	string getAccountType() { return accountType; };
	void setBalance(double bal) { bal = balance; };
	void deposit(double amt) { balance = balance + amt; };
	void withdraw(double amt) { balance = balance - amt; };
	void transfer(BankAccount& acc, double amt) { accountNumber, balance = balance + amt; };
	void printInfo() {
		cout << "Bank Account Number: " << getAccountNumber() << ", Type = " <<
			getAccountType() << customer.printInfo << endl;
	};
};
