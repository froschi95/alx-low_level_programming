#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase, followedby a new line
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
