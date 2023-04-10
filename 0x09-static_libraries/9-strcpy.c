#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
