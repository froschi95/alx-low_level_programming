#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: represents any argument passed to the function
 * Return: integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
