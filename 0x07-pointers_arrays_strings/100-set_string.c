#include "main.h"
#include <stddef.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to a string.
 * @to: String to set the pointer to.
 *
 * Return: void.
 */
void set_string(char **s, char *to)

{
	*s = to;
}

