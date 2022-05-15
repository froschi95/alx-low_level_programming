#include "main.h"

/**
 * _length - calculate the length of the string
 * @s: string
 * Return: int
 */

int _length(char *s)
{
	if (*s != '\0')
	{
		return (1 + _length(s + 1));
	}
	return (0);
}

/**
 * compare - compare characters of the string
 * @s: pointer to string
 * @l: lenght
 * Return: int
 */

int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if true or 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _length(s);
	return (compare(s, l));
}
