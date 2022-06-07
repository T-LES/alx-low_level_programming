#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int pth[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (int i = 0; i < 8; i++)
		_putchar(pth[i]);
	_putchar(10);
	return (0);
}
