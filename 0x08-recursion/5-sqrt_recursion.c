#include "main.h"
int square(int i, int n, int count);

/**
 * square - calculates the square
 * @i: is a number
 * @n: is a number
 * @count: is a number
 * Return: the square
 */
int square(int i, int n, int count)
{
	int j = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (count);
	count++;
	j= 2 * i + 1;
	i++;
	return (square(i, n - j, count));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is a number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int i = 0, count = 0;

	count = square(i, n, count);
	return (count);
}
