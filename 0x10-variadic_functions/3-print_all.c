#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: Void or null
 */

void print_all(const char * const format, ...)
{
	va_list va_lst;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(va_lst, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(va_lst, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(va_lst, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(va_lst, double)), c = 1;
			break;
		case 's':
			str = va_arg(va_lst, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(va_lst);
}
