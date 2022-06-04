#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, f;

	for (c = 48; c < 58; c++)
	{
		f = 48;
		while (f < 58)
		{
			i = 1;
			putchar(c);
			putchar(f);
			if ((i % 2) == 0)
			{
				putchar(44);
				putchar(32);
			}
			i++;
			f++;
		}
	}
	putchar(10);
	return (0);
}
