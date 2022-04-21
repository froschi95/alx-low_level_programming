#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: first integer
 * @*b: Second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	a = *&b;
	b = *&a;
}
