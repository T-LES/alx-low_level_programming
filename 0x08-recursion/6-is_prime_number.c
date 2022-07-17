#include "main.h"
int prime(int i, int n);

/**
 * prime - checks if number is prime
 * @i: is a number
 * @n: is a number
 * Return: if n is a prime number 1 or 0 if not
 */
int prime(int i, int n)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	return (prime(i + 1, n));
}

/**
 * is_prime_number - returns if the input integer
 * is a prime number
 * @n: is a number
 * Return: 1 if n is a prime number or 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 2)
		return (1);
	return (prime(i, n));
}
