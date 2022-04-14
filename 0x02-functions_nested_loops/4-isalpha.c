#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: represents any argument passed to the function
 * Return: 1 if it's a letter(lower or upper), 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
