#include "main.h"

/**
 * rev_string - referses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int n, len;
	char *start, *end, temp;

	/* get length of the string*/
	len = 0;
	while (s != 0)
	{
		len++;
	}
	len--;

	/* Set start and end pointers to the begining of the string*/

	start = s;
	end = s;

	n = 0;
	while (n < len - 1)
	{
		/* increment end pointer and move to the end of the string*/
		end++;
		n++;
	}

	n = 0;
	while (n < len / 2)
	{
		/* swap characters using start and end pointers*/
		temp = *end;
		*end = *start;
		*start = temp;

		/* update pointer positions*/
		start++;
		end--;
		n++;
	}
}
