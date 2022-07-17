#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is a number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int i = -1, j = -1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	i++;
	j++;
	_sqrt_recursion(n -(2j + 1));
	return (i);
}
