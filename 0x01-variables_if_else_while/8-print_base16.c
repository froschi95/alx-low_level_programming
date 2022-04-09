#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 for success
 */

int main(void)
{
	int num;

	char ch;

	/* Using the ASCII value of 0 - 9*/

	for (num = 48; num < 58; num++)
		putchar(num);
	for (ch = ‘a’; ch <= ‘f’; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
