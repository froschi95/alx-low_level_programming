#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * each digit must be different, no repititions allowed
 * Return: 0 for Success
 */

int main(void)
{
	int i, j, n;
	i = 48;
	j = 48;
	n = 48;

	while (n < 58)
	{
		while ( j < 58)
		{
			while ( i < 58)
			{
				if (i > j && j > n)
				{
					putchar(n);
					putchar(j);
					putchar(i);
					if (n != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			j++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
