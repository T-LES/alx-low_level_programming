#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 48;

	while ((i != 50 && i != 52))
	{
		if (i <= 57)
			_putchar(i);
		i++;
	}
	_putchar(10);
}
