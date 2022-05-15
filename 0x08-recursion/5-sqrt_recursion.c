#include "main.h"

/**
 * sqrt_a - calculate the square root of a number
 * @a: number
 * @b: first guess
 * Return: int
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
