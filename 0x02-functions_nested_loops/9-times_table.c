#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 * Return: void
 */

void times_table(void)
{
	int n;
	int m;

	n = m = 0;

	while (n < 10)
	{
		while (m < 10)
		{
			_putchar(n * m);
			_putchar(',');
			_putchar(' ');
			if ((int) log10(n * m) == 1)
			{
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
