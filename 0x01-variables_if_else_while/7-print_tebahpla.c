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
	char lw[26] = "zyxwvutsrqponmlkjihgfedcba";
	int c;

	for (c = 0; c < 26 ; c++)
		putchar(lw[c]);
	putchar('\n');
	return (0);
}
