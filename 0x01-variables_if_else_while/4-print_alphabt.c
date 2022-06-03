#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program print the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lh[24] = "abcdfghijklmnoprstuvwxyz";
	int c;

	for (c = 0; c <= 23; c++)
		putchar(lh[c]);
	putchar('\n');
	return (0);
}
