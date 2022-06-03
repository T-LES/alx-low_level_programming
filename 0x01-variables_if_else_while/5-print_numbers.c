#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nb;

	for (nb = '0'; nb >= '9'; nb++)
		putchar(nb);
	putchar('\n');
	return (0);
}
