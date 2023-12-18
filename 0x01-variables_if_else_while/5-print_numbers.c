#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print all single digit decimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		printf("%d", numb);
	putchar('\n');
	return (0);
}
