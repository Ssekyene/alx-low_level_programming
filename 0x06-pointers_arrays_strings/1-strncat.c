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
 * _strncat - concatenate two strings with at most n bytes from source
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 * Return: Concatenated destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length_dest;

	length_dest = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length_dest + i] = src[i];
	dest[length_dest + i] = '\0';
	return (dest);
}
