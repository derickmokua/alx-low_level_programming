#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ')
	{
	if (len == 0)
	count++;
	len++;
	}
	else
	len = 0;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL, or memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to an array of strings (words).
 * Each element of the array contains a single word, null-terminated.
 * The last element of the array is NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL || *str == '\0')
	return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
	while (str[j] == ' ')
	j++;
	len = 0;
	while (str[j + len] != ' ' && str[j + len] != '\0')
	len++;
	words[i] = malloc(sizeof(char) * (len + 1));
	if (words[i] == NULL)
	{
	for (k = 0; k < i; k++)
	free(words[k]);
	free(words);
	return (NULL);
	}
	for (k = 0; k < len; k++)
	words[i][k] = str[j++];
	words[i][k] = '\0';
	}

	words[i] = NULL;

	return (words);
}

