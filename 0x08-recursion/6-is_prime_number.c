#include "main.h"

/**
 * prime_a - checks if a number is a prime number
 * @a: number
 * @b: number
 * Return: 1 for success or 0 otherwise
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}


/**
 * is_prime_number - checks is a number is prime
 * @n: number
 * Return: 1 if true or 0 otherwise
 */

int is_prime_number(int n)
{
		return (prime_a(n, 2));
}
