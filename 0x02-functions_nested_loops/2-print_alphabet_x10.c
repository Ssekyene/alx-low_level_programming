#include "main.h"
/**
*print_alphabet_x10 - prints alphabets from a-z 10 times
*@void: enters nothing
*Return: nothing
*/
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
