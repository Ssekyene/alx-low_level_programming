#include "main.h"

/**
 * leet - use 1337 to change string
 * @str: parameter string
 * Return: modified string
 */
char *leet(char *str)
{
	char characters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[5] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; characters[j] != '\0'; j++)
		{
			if (str[i] == characters[j])
				/*map even-odd pairs of indices in characters array*/
				/*to singular indices in num arrary in a respective order*/
				str[i] = num[j / 2] + '0';
		}
	}
	return (str);
}
