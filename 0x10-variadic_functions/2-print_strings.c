#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: void or null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va_lst;
	unsigned int i;
	char *str;

	va_start(va_lst, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(va_lst, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(va_lst);
}
