#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: a number whose last digit is required
 *
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
	_putchar((num % 10) + '0');
	return (num % 10);
}
