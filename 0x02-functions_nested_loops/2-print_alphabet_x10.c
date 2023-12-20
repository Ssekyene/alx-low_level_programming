#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets from a-z 10 times
 * @void: enters nothing
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	i++;
	}
}
