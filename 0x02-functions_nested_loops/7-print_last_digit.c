#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: a number whose last digit is required
 *
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
	int l_digit;

	l_digit = num % 10;
	if (l_digit < 0)
		l_digit *= -1;
	_putchar(l_digit + '0');
	return (l_digit);
}
