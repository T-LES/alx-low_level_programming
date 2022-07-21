#include "main.h"
unsigned long int _pow(unsigned int x, unsigned int y);

/**
 * _pow - calculates (base ^ power)
 * @x: base of the exponent
 * @y: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int x, unsigned int y)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= y; i++)
		num *= x;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 32;
	unsigned long int k;

	while (i >= 0)
	{
		k = _pow(2, i);

		if (n >= k)
		{
			_putchar(49);
			n -= k;
		}
		else
			_putchar(48);
		i--;
	}
}
