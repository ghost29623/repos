#include "BankAccount.h"
#include "Customer.h"
using namespace std;

int main()
{
	Customer tue("11-11-11", "tue bao");

	BankAccount saving("200981", "Savings", tue);
	BankAccount checking("200981", "Checking", tue);


	saving.printInfo();
	checking.printInfo();

	saving.deposit(100);
	checking.deposit(79.23);
	saving.transfer(checking, 25.10);
	checking.withdraw(10);
	saving.printInfo();
	checking.printInfo();

	system("pause");

};
