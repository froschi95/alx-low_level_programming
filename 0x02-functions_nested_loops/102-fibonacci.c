#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0 Always for Success
 */

int fibonach(int i);

int main(void)
{
	int i;

	for (i=1; i<=50; i++)
	{
		if (i != 50)
		{
			printf("%d, ", fibonach(i));
		}
		else {
			printf("%d\n", fibonach(i));
		}
	}
	return (0);
}

int fibonach(int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return fibonach(i-1) + fibonach(i-2);
	}
}
