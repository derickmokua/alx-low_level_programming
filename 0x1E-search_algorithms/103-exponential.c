#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - Returns the minimum of two size_t values.
 * @a: First value to compare.
 * @b: Second value to compare.
 *
 * Return: `a` if it is less than or equal to `b`, otherwise `b`.
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - Searches for a value in an integer array using a
 *                        binary search algorithm. Not guaranteed to return
 *                        the lowest index if `value` appears twice in `array`
 *                        (modified from `binary_search`).
 * @array: Pointer to the first element of the array to search
 * @value: Value to search for
 * @low: Starting index
 * @high: Ending index
 *
 * Return: Index containing `value`, or -1 if `value` is not found or
 *         `array` is NULL.
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted integer array
 *                      using the exponential search algorithm.
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index containing `value`, or -1 if `value` is not found or
 *         `array` is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}

