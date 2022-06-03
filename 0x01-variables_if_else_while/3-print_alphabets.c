#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lh, uh;

	for (lh = 'a'; lh <= 'z'; lh++)
		putchar(lh);
	for (uh = 'A'; uh <= 'Z'; uh++)
		putchar(uh);
	putchar('\n');
	return (0);
}
