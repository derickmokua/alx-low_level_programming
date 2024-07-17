#include "search_algos.h"

/**
 * linear_search - performs a linear search for a value
 * in an array of integers.
 *
 * @array: the array to search through
 * @size: the number of elements in the array
 * @value: the value to find
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
