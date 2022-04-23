#include "main.h"

/**
 * puts_half - prints the second half of a string,
 * followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int n, len;

	/* Get length of string */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
