#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int check_prime(int n, int i);

int is_prime_number(int n)

{
	if (n < 2)
	return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - helper function to check if a number is prime recursively
 * @n: the number to check
 * @i: the divisor to check against
 *
 * Return: 1 if n is prime, otherwise 0
 */
int check_prime(int n, int i)

{
	if (i == n)
	return (1);
	else if (n % i == 0)
	return (0);
	return (check_prime(n, i + 1));
}

