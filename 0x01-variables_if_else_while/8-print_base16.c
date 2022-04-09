#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 for success
 */

int main(void)
{
	int num = 48;

	char ch = 'a';

	/* Using the ASCII value of 0 - 9*/
	while (num < 58)
	{
		putchar(num);
		num++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
