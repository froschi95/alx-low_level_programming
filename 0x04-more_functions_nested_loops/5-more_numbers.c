#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar(ch / 10 + 48);
			}
			_putchar(ch % 10 + 48);
		}
		_putchar('\n');
	}
}