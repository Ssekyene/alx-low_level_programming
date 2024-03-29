#include "main.h"

/**
 * _pow_recursion - recursively multiplies x by itself
 * according to the power ie x ^ y
 * @x: value to raise the power
 * @y: power
 * Return: value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
