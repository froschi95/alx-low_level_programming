#include "main.h"

/**
 * print_triangle - prints a triangle followed by a newa line
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;
	int s = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < s)
					_putchar(' ');
				else
					_putchar('#');
			}
			s--;
			_putchar('\n');
		}
	}
}
