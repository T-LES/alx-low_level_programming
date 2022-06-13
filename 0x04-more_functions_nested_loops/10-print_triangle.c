#include "main.h"

/**
 * print_triangle - prints a square
 *
 * @size: is the size of the triangle
 * be printed
 *
 * Return: new line if n is less or equal to 0 and
 * number otherwise
 */
void print_triangle(int size)
{
	int i, j, a;

	if (size <= 0)
		putchar(10);
	else
	{
		for (i = size; i >= 0; i--)
		{
			j = 0;

			while (j < i)
			{
				putchar(32);
				j++;
			}
			a = j;
			if (a != 0)
			{
				while (a < size)
				{
					putchar(35);
					a++;
				}
			}
			else
			{
				for (j = 0; j < size; j++)
					putchar(35);
			}
			putchar(10);
		}
	}
}
