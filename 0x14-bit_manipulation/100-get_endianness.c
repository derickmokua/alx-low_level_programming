#include <unistd.h>

/**
 * get_endianness - Determine the endianness of the system
 *
 * Return: returns 1 for  big endian
 * andd 0 for little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
