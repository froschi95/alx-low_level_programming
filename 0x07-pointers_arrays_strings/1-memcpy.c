#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area src to memory block dest
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
