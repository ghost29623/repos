#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <stdio.h>


void stringReverse(char *str)
{


	if (*str)
	{
	
		stringReverse(str + 1);
		printf("%c", *str);

	}
}

int main()
{

	
	char str[] = "Are You Happy";
	printf("%s\n", str);

	stringReverse(str);
	printf("\n");
	system("pause");
}
