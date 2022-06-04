#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in reverse order
 *
 * Return: Amways 0 (Success)
 */
int main(void)
{
	char lw;

	for (lw = 'z'; lw <= 'a'; lw--)
		putchar(lw);
	putchar('\n');
	return (0);
}
