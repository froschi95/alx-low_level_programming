#include "main.h"

/**
 * _strcpy - copies the string including the null byte to another buffer
 * @src: pointer to string to be copied
 * @dest: destination pointer being copied to
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < len; i++)
		dest[i] = '\0';

	return (dest);
}
