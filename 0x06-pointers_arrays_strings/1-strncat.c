#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
