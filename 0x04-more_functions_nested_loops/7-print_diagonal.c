#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print \
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
