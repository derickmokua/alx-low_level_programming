#include <stdio.h>
#include <math.h>

/**
 * main - Finds the largest prime factor of the number 612852475143.
 *
 * Return: Always 0
 */

int main(void)

{
	long n = 612852475143;
	long i;

	while (n % 2 == 0)
	{
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%ld\n", n);

	return (0);
}
