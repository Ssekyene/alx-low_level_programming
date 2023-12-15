#include<stdio.h>
#include<unistd.h>
/**
* main - Entry point
* Description: Prints a message to standard error
*
* Return: 1
*/
int main(void)
{
	write(STDERR_FILENO,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
