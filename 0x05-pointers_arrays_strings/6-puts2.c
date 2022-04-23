#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string argument
 * Return: void
 */

void puts2(char *str)
{
	int n, len;

	/* Get the length of the string */
	len = _strlen(str);

	n = 0;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
