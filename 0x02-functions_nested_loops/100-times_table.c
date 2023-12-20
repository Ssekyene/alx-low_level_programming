#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints table of parameter
 * @n: maximum number for getting multiples
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, multiple;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multiple = i * j;
				if (n == 0)
					printf("%d\n", multiple);
				else if (j != n)
				{
					if (j == 0) /*the multiple will always be 0 when j=0*/
						printf("%d,", multiple);
					else
						printf("%4d,", multiple);
				}
				else
					printf("%4d\n", multiple);
			}
		}
	}
}
