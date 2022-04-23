#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to a string
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length += 1;
	}
	return length;
}
