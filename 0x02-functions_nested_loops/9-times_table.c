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
				putchar('0');
			}
			else if (p < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(units + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(tens + '0');
				putchar(units + '0');
			}
			m++;
		}
		putchar('\n');
		n++;
	}
}
