#include <stdio.h>

/**
 * main - prints all lowercase alphabets except e and q
 * Return: 0 for success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++
	}
	putchar('\n');
	return (0);
}
