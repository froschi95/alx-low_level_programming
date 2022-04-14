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

				if (n * m < 10)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar((n * m) + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
