#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is an integer
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (n * (-1)) % 10;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
	_putchar(10);
}
