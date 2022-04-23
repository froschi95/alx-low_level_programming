#include "main.h"

/**
 * print_rev - prints a string in reverse followed y a new line
 * @s: pointer to a string
 * Return: void
 */

void print_rev(char *s)
{
	int n, len;

	n = 0;

	len = _strlen(s);
	
	while (len >= n)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
