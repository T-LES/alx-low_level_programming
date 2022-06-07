#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int lc;

	while (i <= 10)
	{
		lc = 97;
		while (lc <= 122)
		{
			_putchar(lc);
			lc++;
		}
		_putchar(10);
		i++;
	}
	_putchar(10);
}
