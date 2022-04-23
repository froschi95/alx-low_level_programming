#include "main.h"

/**
 * _puts - print out a string followed by a new line to stdout
 * @str: pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
