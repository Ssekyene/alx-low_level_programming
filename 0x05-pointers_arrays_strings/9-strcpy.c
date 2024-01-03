#include "main.h"

/**
 * _strcpy - copies one string into another
 * @dest: buffer parameter
 * @src: string to copy
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
