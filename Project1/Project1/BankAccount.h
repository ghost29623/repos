#pragma once
#
#include "customer.h"
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	private:
		string accountNumber;
		string accountType;
		double balance = 0;
		Customer& customer;	

	public:
		BankAccount(string num, string typ, Customer & cus);
		string getAccountType() { return accountType; };
		string getAccountNumber() { return accountNumber; };
		void setBalance(double bal) { bal = balance; };
		double getBalance() const { return balance; };
		void deposit(double amt) { balance = balance + amt; };
		void withdraw(double amt) { balance = balance - amt; };
		void transfer(BankAccount & acc, double amt) { accountType, balance = getBalance() + amt; };
		void printInfo() {
			cout << "Bank Account Number: " << accountNumber << ", Type: " <<
				accountType << ", Balance: " << balance << ", ";
			customer.printInfo();
		};

};


