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
	e = 48;

	while (e < 58)
	{
		i = 48;
												while (i < 58)
												{
													if (e != i && e < i)
													{
														putchar(e);
														putchar(i);
														if (i == 57 && e == 56)
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
