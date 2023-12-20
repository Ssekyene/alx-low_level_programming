#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int num1 = 0, num2 = 1;

	while (i < 98)
	{
		num2 = num2 + num1;
		num1 = num2 - num1;
		printf("%lu", num2);
		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
