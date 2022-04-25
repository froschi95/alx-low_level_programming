#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j;
	char ch[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
			continue;
		}
		for (j = 0; ch[j] != '\0'; j++;)
		{
			if (ch[j] == s[i])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}
		if (s[i] >= 65  && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}
	}
	return (s);
}
