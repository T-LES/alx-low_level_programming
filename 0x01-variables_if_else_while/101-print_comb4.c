#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, f, u;

	for (c = 48; c < 58; c++)
	{
		f = c + 1;
		while (f < 58)
		{
			u = f + 1;
			while (u < 58)
			{
				putchar(c);
				putchar(f);
				putchar(u);
				if (c < 55 || f < 56 || u < 57)
				{
				putchar(44);
				putchar(32);
				}
				u++;
			}
			f++;
		}
	}
	putchar(10);
	return (0);
}
