#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: represents any argument passed to the function
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastn = n % 10;
	if (n < 0)
	{
		lastn = last * -1;
	}
	putchar(lastn);
	return (lastn);
}
