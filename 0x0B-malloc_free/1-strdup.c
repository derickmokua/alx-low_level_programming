#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly
 * allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On error, returns NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
