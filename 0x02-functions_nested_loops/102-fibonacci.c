#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0 Always for Success
 */

int main(void)
{
	long int i, j, k, fibo;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (i != 50)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		fibo = j + k;
		j = k;
		k = fibo;
	}

	return (0);
}
