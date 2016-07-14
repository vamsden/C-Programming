# include <stdio.h>

int main()
{
	int num1=0, num2=0, total=0;

	puts("Program to calculate sum of 2 numbers...");

	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("Enter number 2: ");
	scanf("%d", &num2);

	total = num1 + num2;
	printf("Sum of 2 numbers is: %d\n", total);
	return 0;
}