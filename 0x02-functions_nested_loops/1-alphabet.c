#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int lc = 97;

	while (lc <= 122)
	{
		_putchar(lc);
		lc++;
	}
	_putchar(10);
}
