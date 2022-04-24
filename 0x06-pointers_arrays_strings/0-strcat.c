#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
