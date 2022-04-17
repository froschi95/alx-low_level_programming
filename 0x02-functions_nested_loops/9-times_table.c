#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 * Return: void
 */

void times_table(void)
{
	int n, m, p, tens, units;

	n = 0;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			p = n * m;
			tens = p / 10;
			units = p % 10;

			if (m == 0)
			{
				_putchar('0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(units + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
