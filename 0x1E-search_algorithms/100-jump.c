#include "search_algos.h"
#include <math.h>

size_t min(size_t a, size_t b);

/**
 * min - Computes the minimum of two size_t values.
 * @a: The first value to compare.
 * @b: The second value to compare.
 *
 * Return: Returns `a` if it is less than or equal to `b`, otherwise returns `b`.
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted integer array using
 * the jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of `value`, or -1 if `value` is not found
 *         or `array` is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
