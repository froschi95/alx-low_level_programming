#include "main.h"

/**
* _strstr - locates a substring
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *res = haystack;
		char *k = needle;

		while (*res == *k && *k != '\0')
		{
			res++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
