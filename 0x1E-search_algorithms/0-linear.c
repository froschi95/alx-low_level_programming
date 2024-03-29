#include "search_algos.h"

/**
  * linear_search - linear search
  * @array: pointer to first element in search array
  * @size: size of array
  * @value: value to search for
  * Return: index where found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (signed int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
