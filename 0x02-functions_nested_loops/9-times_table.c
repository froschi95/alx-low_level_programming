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
		m = 0;
		while (m < 10)
		{
			if (m != 9)
			{
				_putchar((n * m) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (m == 9)
			{
				_putchar((n * m) + '0');
			}
			if (n * m < 10)
			{
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
