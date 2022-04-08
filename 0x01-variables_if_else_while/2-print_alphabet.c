#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0 if successful, or non-zero otherwise
 */

int main(void)
{
	char alpha = 'a';
	/* Loop through alphabets */
	while (alpha <= 'z')
	{
		/* print alphabet to the screen */
		putchar(alpha);
		/* increment by 1 */
		alpha++;
	}
	putchar('\n');
	return (0);
}
