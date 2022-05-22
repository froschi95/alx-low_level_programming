#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: Void or null
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va_lst;
	unsigned int i;

	va_start(va_lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va_lst, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(va_lst);
}
