#include <iostream>
#include <string>

using namespace std;

int computerSum(int n)
{
	int sum = 0;
	if (n == 0)
	{
		cout << "n = 0, stop the recursion." << endl;
	}
	else
	{
		computerSum(n - 1);
		n = n + (n-1);
	}
	return sum;
}

int main()
{
	computerSum(4);
	system("pause");
}

