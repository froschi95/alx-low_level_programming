#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, k;

	/* Iterate through the array */
	k = n - 1;
	i = 0;
	while (i <= k)
	{
		if (i != k)
		{
			printf("%d, ", a[i]);
		}
		else if (i == k)
			printf("%d", a[i]);

		i++;
	}
	printf("\n");
}
