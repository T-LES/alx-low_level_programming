#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money.
 * @argc: number of arguments passed to the program.
 * @argv: argument vector of pointers to strings.
 * Return: 0 if success, 1 if not.
 */
int main(int argc, char *argv[])
{
	int cents, c = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		c += 1;
	}
	printf("%d\n", c);
	return (0);
}
