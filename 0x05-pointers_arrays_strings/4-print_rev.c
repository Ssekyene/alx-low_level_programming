#include "main.h"

/**
 * _strlen - return length of string parameter
 * @str: string parameter
 * Return: length of string
 */
int _strlen(char *str)
{
	int length;
	int i;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * print_rev - print string parameter in reverse
 * @s: parameter string
 */
void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	if (n != 0)
	{

		for (; n >= 0 ; n--)
		{
			if (s[n] == '\0')
				continue;
			_putchar(s[n]);
		}
	}
	_putchar('\n');
}
