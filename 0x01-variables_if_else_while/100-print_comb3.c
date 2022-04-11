#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits,
 * with each digit being different.
 * Return: 0 for successfull compilation
 */

int main(void)
{
	int i, n;

	i = 48;

	n = 48;

	while (n < 58)
	{
		while (i < 58)
		{
			if (n != i && n < i)
			{
				putchar(n);
														putchar(i);
														if (i == 57 && n == 56)
														{
															break;
														}
														putchar(',');
														putchar(' ');
													}
													i++;
												}
												e++;
	}
	putchar('\n');
	return (0);
}
