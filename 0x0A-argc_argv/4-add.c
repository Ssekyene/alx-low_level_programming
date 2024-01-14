#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point for the program
 * Description: prints sum of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (j == 0 && arg[j] == '-')
				continue;
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
