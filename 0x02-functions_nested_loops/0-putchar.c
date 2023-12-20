#include "main.h"

/**
 * main - Entry point for the program
 *
 * Description: use _putchar.c and main.h to print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
