#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to a character array.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
