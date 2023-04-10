#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the substring within the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
