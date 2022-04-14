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
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n);
	}
}
