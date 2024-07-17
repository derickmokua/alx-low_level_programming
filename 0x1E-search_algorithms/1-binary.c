#include "search_algos.h"

/**
 * binary_search - Searches for a value in an integer array using binary
 * search algorithm. If `value` appears multiple times, index returned
 * is not guaranteed to be the lowest.
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of `value`, or -1 if `value` is not found or `array` is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
