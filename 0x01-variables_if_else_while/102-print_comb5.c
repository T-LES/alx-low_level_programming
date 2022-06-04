#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, f, o;

	for (c = 48; c < 58; c++)
	{
		f = 48;
		while (f < 58)
		{
			o = f +1;
			i = c;
			while (i < 58)
			{
				while (o < 58)
				{
					putchar(c);
					putchar(f);
					putchar(32);
					putchar(i);
					putchar(o);
					if ((c < 57 || f < 56 || i < 57 || o < 57))
					{
						putchar(44);
						putchar(32);
					}
					o++;
				}
				o = 48;
				i++;
			}
			f++;
		}
		c++;
	}
	putchar(10);
	return (0);
}
