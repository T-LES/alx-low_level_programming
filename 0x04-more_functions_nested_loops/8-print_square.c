#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: is the size of square 
 * be printed
 *
 * Return: new line if n is less or equal to 0 and
 * number otherwise 
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (size <= 0)
			_putchar(10);
		else
		{
			j = 0;

			while (j < n)
			{
				_putchar(35);
				j++;
			}
		}
		_putchar(10);
	}
}
