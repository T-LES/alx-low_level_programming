#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
		if ((i > 47) && (i < 58))
			putchar(i);
		else if ((i > 96) && (i < 103))
			putchar(i);
	putchar('\n');
	return (0);
}
