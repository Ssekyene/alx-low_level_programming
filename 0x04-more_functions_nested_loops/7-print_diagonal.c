#include "main.h"

/**
 * print_diagonal - prints diagonal line on n lines
 * @n: number of times the charater '\' is printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (n > 1 && i > 0)
			{
				int j;

				for (j = 0; j < i; j++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
