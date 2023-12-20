#include "main.h"

/**
 * print_sign - checks if parameter is positive, negative or zero
 * and prints + or - or 0 respectively
 * @n: parameter for checking the sign
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
