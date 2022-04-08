#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 for success, non-zero otherwise
 */

int main(void)
{
	int num = 0;

	while (num < 10)
		putchar(num);
	putchar('\n');
	return (0);
}
