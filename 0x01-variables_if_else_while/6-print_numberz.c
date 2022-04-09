#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 for success, non-zero otherwise
 */

int main(void)
{
	/* Using ASCII values of 0 - 9 */
	
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
