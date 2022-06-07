#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: is an integer
 *
 * Return: if n is greater than zero 1 and prints +
 * if n is zero 0, otherwise -1 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
	_putchar(10);
}
