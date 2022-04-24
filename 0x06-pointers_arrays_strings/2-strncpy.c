#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination pointer
 * @src: pointer to source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
