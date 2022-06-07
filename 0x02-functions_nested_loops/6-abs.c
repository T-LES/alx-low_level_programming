#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: is an integer
 * Return: An absolute value.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = (a *= 2) / a;
		return (a);
	}
	_putchar(10);
}
