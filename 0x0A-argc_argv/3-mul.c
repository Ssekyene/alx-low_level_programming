#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point for the program
 * Description: multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int pdt;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	pdt = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", pdt);
	return (0);
}
