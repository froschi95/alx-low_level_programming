#include <stdio.h>

/**
 * main - prints alphabets in lowercase and then in uppercase,
 * followed by a new line
 * Return: 0 for success, non-zero otherwise
 */

int main(void)
{
	int alpha;
	for (alpha=‘a’; alpha<=‘z’; alpha++)
		putchar(alpha);
	for (alpha=‘A’; alpha<=‘Z’; alpha++)
		putchar(alpha);
	putchar("\n");
	return (0);
}
