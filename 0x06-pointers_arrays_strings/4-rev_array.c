#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)

{
	int i = 0, tmp;

	n -= 1;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
