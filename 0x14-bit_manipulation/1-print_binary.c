#include "main.h"

/**
 * print_binary - Displays the binary representation
 * of an unsigned long integer.
 * @n: The unsigned long integer to be printed.
 *
 * Return: No return value.
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
