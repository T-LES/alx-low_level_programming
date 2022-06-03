#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints if one number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;
	if (n<0)
		printf("is negative\n");
	else if (n>0)
		printf("is positive\n");
	else
		printf("is zero\n");
	return (0);
}
