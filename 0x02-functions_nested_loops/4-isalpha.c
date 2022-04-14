#include "main.h"

/**
 * isalpha.c - checks for alphabetic characters
 * Return: 1 if it's a letter(lower or upper), 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >='A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
