#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0 Alwaysfor Success
 */
int main(void)
{
	int i;
	unsigned long int j, k, next_fib, total;

	j = 1;
	k = 2;
	total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			total = total + j;
		}
		next_fib = j + k;
		j = k;
		k = next_fib;
	}

	printf("%lu\n", sum);

	return (0);
}
