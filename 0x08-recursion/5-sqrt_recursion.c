#include "main.h"

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to compute the square root of
 * @i: the current guess at the square root
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_helper(int n, int i)

{
	if (n < 0)
	return (-1);
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 1));
}

