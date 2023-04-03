#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string to be searched
 * @accept: the bytes being searched
 *Return:returns NULL if no pointer is found
 */

char *_strpbrk(char *s, char *accept)

{
	char *s_ptr, *accept_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
		for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
		}
	}
	return (NULL);
}
