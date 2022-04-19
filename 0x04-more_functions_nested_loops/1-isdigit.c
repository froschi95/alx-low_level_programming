#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c - argument passed to the function
 * Return: 1 if true or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
