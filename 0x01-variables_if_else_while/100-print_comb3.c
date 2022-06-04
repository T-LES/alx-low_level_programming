#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, f;

	for (c = 48; c < 58; c++)
	{
		f = c + 1;
		while (f < 58)
		{
			putchar(c);
			putchar(f);
			if (c < 56 || f < 57)
			{
				putchar(44);
				putchar(32);
			}
			f++;
		}
	}
	putchar(10);
	return (0);
}
