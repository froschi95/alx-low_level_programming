#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0,
 * if n is greater that 15 or less than zero it prints nothing
 * @n: any integer argument
 * Return: void
 */

void print_times_table(int n)
{
	int l, m, p, tens, units;

	if (n >= 0 && n < 15)
	{
		l = 0;
		while (l <= n)
		{
			m = 0;
			while (m <= n)
			{
				p = l * m;
				tens = p / 10;
				units = p % 10;

				if (m == 0)
				{
					_putchar('0');
				} else if (p < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(units + '0');
				} else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((tens % 10) + '0');
					_putchar(units + '0');
				} else if (p > 99 && p < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(p / 100 + '0');
					_putchar(tens % 10 + '0');
					_putchar(units + '0');
				}
				m++;
			}
			_putchar('\n');
			l++;
		}
	}
}
