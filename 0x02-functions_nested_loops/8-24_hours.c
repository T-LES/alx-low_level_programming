#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 48, j, k, l;

	while (i <= 50)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			l = 48;
			while (k <= 53)
			{
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					if (l <= 57)
						_putchar(10);
					l++;
				}
				l = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	_putchar(10);
}
