#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: points to the beginnig of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr == *haystack_ptr && *needle_ptr != '\0'
	&& *haystack_ptr != '\0')
		{
			needle_ptr++;
			haystack_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
