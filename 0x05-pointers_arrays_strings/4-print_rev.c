#include "main.h"

/**
 * print_rev - prints a string in reverse followed y a new line
 * @s: pointer to a string
 * Return: void
 */

void print_rev(char *s)
{
	int n, len;

	len = 0;

	while (s != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
