#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n:  a pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return:  returns 1,success or 0,failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
