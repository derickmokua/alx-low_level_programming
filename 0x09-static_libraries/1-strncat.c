#include "main.h"

/**
 * _strncat - Concatenates n bytes from the string pointed to by src
 * to the end of the string pointed to by dest.
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes to be concatenated
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
