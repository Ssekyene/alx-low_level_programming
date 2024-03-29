#include "main.h"

/**
 * _strlen - return length of string parameter
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * puts_half - print last half of string
 * @str: string paramater
 */
void puts_half(char *str)
{
	int length, i;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length / 2) + 1; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
