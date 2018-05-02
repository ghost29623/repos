#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
	string id;
	string name;
public:
	Customer(string, string);
	string setId(string i) { i = id; };
	string setName(string na) { na = name; };
	string getId() { return id; };
	string getName() { return name; };
	void printInfo() {
		cout << "CustomerID: " << getId() << ", Customer Name: " << getName;
	};
};

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


#include "BankAccount.h"

int main()
{

	Customer tue("111-22-3333", "Tue Bao");
	tue.printInfo();

	system("pause");

};



