#include <stdio.h>

/**
 * main - Entry point for the program
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, mod3, mod5;

	for (i = 1; i <= 100; i++)
	{
		mod3 = i % 3;
		mod5 = i % 5;
		if (!mod3 && mod5)
			printf("Fizz ");
		else if (mod3 && !mod5)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else if (!mod3 && !mod5)
			printf("FizzBuzz ");
		else
				printf("%d ", i);
	}
	return (0);
}
