#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	return (0);
}
