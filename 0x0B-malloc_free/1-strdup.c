#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies parameter string to a new address
 * @str: parameter string
 * Return: - ponter to duplicated string
 *	     - NULL for failure
 */
char *_strdup(char *str)
{
	int i;
	char *ptr_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	ptr_str = malloc(sizeof(char) * (i + 1));

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(ptr_str + i) = *(str + i);
	*(ptr_str + i) = *(str + i);

	return (ptr_str);
}
