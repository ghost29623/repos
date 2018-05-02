#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <stdio.h>

int main()
{
	int Array[9] = { 0 };
	double sale;
	int salary;
	int t;
	int i;

	for (i = 0; i <= 15; i++)
	{
		sale = rand() % 5000 + 1000;
		salary = sale * 0.09 + 200;
		Array[(salary / 100) - 2]++;
		t = (salary / 100) - 2;
		printf("%d: %f ---- %d ---- \n", i, sale, salary);

	}

	for (i = 0; i < 9; i++)
	{
		printf("%d: %d\n", i, Array[i]);

	}

	system("pause");
}
