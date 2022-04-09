#include <stdio.h>

/**
 * main - prints alphabets in lowercase and then in uppercase,
 * followed by a new line
 * Return: 0 for success, non-zero otherwise
 */

int main(void)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}

	putchar('\n');
	return (0);
}
