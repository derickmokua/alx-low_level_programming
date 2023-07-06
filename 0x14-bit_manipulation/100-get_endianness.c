#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: returns  0( big endian), 1 (little endian)
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	if (*byte)
		return 1;
	else
		return 0;
}
