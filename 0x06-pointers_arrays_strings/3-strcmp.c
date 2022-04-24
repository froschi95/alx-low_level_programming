#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: reference to first string
 * @s2: refrence to second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = diff = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && diff == 0)
	{
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
