#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <stdio.h>

void circleCircumference();
void circleArea();
void sphereVolume ();


int main(void)
{
	void(*function[3])(int) = { circleCircumference, circleArea, sphereVolume };
	size_t option;
	

	printf("%s", "funtion number\n0: Adding\n1: subtracting\n2: multiplying\n3: deviding\n");
	printf("%s", "Enter a number between 0 to 3, enter 4 to end the program: ");
	scanf_s("%u", &option);

	while (option >= 1 && option <= 3)
	{
		(*function[option-1])(option-1);
		printf("%s", "Enter a number between 1 to 3, enter any else number to end the program: ");
		scanf_s("%u", &option);

	}

	puts("Program execution completed.");

	system("pause");
}

void circleCircumference()
{
	printf("Circle Circumference Function\n");
	double num;
	printf("Enter the radius: ");
	scanf_s("%lf", &num);

	double circum = 2 * num * 3.14;

	printf("the circumference is : %lf\n", circum);

}

void circleArea() {
	printf("Circle Area Functon\n");

	double num;
	printf("Enter the radius: ");
	scanf_s("%lf", &num);
	double area = num * num * 3.14;

	printf("the circumference is : %lf\n", area);
}
void sphereVolume() {
	printf("Sphere Volume\n");

	double num;
	printf("Enter the radius: ");
	scanf_s("%lf", &num);

	double volume = num * num * num * 3.14 * (4/3);

	printf("the value is: %lf\n", volume);

}
