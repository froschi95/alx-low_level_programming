#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int j, k, count;

	if (n < 0)
	{
		_putchar(45);
		j = n * -1;
	}
	else
	{
		j = n;
	}

	k = j;
	count = 1;

	while (k > 9)
	{
		k /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((j / count) % 10) + 48);
	}
}
