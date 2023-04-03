#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 * Return: a pointer to the first character c in the string s,
 * or NULL if character  not found
 */
char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	return (NULL);
}
