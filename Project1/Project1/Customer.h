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
		cout << "CustomerID: " << getId() << ", Customer Name: " << getName() << endl;
	};
};
