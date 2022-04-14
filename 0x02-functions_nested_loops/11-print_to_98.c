#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument passed to the function
 * followed by a new line
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf('\n');
	}
	else
	{
		printf("%d, ", n);
		printf("\n")
	}
}
