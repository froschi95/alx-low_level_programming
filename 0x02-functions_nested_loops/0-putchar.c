#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: 0 for success
 */

int main(void)
{
	char inputText[8] = "_putchar";

	int n = 0;

	while (n < 8)
	{
		_putchar(inputText[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
