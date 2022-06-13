#include "main.h"

/**
 * more_numbers - prints ten times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(49);
			_putchar((i % 10) + 48);
		}
		_putchar(10);
	}
}
