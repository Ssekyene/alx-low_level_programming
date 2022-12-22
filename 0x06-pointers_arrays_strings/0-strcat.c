#include "main.h"
/**
*_strcat - function that concatenates two strings
*@dest: pointer to the string to be appended
*@src: pointer to the string to append
*Return: pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
for (int i = 0; dest[i] != '\0'; i++)
{
dest_len++;
}
for (int j = 0; src[j] != '\0'; j++)
{
dest[dest_len++] = src[j];
}
return (dest);
}
