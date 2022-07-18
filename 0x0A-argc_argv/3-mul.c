#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int res = 1, i;

	if (i > 2)
	{
		for (i = 1; i < argc, i++)
			res *= atoi(argv[i]);
	}
	else
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
