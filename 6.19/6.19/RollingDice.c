#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <stdio.h>
#define ROLLINGTIMES 36000


int main()
{
	int total;
	int arr1[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int arr2[11] = { 0 };
	//rolling 2 dice and adding.
	for (int i = 0; i <= ROLLINGTIMES; i++)
	{
		int diceVal1 = rand() % 6 + 1;
		int diceVal2 = rand() % 6 + 1;
		total = diceVal1 + diceVal2;

		for (int i = 0; i <= 10; i++)
		{
			if (arr1[i] == total - 2)
				arr2[i]++;
		}
	}



	// print out the arr
	printf("  dice point    |	frequency\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("         %d	|	%d\n", arr1[i] + 2, arr2[i]);

	}

	system("pause");

}
